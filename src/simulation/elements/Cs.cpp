
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CS PT_CS 226
        Element_CS::Element_CS() {
            Identifier = "DEFAULT_PT_CS";
            Name = "Cs";
            ATMnumber = 55;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Caesium";
    
            Update = &Element_CS::update;
        }
        //#TPT-Directive ElementHeader Element_CS static int update(UPDATE_FUNC_ARGS)
        int Element_CS::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CS::~Element_CS() {}
        