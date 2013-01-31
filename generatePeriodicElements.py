import re, os, shutil, string, json
from pprint import pprint

def generateElements():
        elementText = """
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_NAME PT_NAME NUMBER
        Element_NAME::Element_NAME() {
            Identifier = "DEFAULT_PT_NAME";
            Name = "SMALL";
            ATMnumber = ATMN;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "DESC";
    
            Update = &Element_NAME::update;
        }
        //#TPT-Directive ElementHeader Element_NAME static int update(UPDATE_FUNC_ARGS)
        int Element_NAME::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_NAME::~Element_NAME() {}
        """
        elements = []
        startingNumber=172

        json_data = open("periodicTable.json")
        data = json.load(json_data)
        
        def loopTElements(looper,startingNumber):
                for j in looper: #integer
                        k = j['elements']
                        for l in k: #integer
                                element = {'NAME':l['small'],'NUMBER':startingNumber,'ATMNUMBER':l['number'],'DESC':l['name']}
                                elements.append(element)
                                startingNumber+=1
                return startingNumber

        def loopOtherElements(looper,startingNumber):
                for l in looper: #integer
                        element = {'NAME':l['small'],'NUMBER':startingNumber,'ATMNUMBER':l['number'],'DESC':l['name']}
                        elements.append(element)
                        startingNumber+=1
                return startingNumber
                        
                                        
        i = data['table']
        startingNumber = loopTElements(i,startingNumber)
        i = data['lanthanoids']
        startingNumber = loopOtherElements(i,startingNumber)
        i = data['actinoids']
        startingNumber = loopOtherElements(i,startingNumber)
      
        for element in elements:
                elementNameUppercase = str(element['NAME']).upper()
                elementTrueText = elementText.replace("NAME",elementNameUppercase)
                elementTrueText = elementTrueText.replace("SMALL",element['NAME'])
                elementTrueText = elementTrueText.replace("NUMBER",str(element['NUMBER']))
                elementTrueText = elementTrueText.replace("ATMN",str(element['ATMNUMBER']))
                elementTrueText = elementTrueText.replace("DESC",str(element['DESC']))
                print(elementTrueText)
                f = open("src/simulation/elements/"+element['NAME']+".cpp","w")
                f.write(elementTrueText)
                f.close()
               

generateElements()
               
