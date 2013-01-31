
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CN PT_CN 255
        Element_CN::Element_CN() {
            Identifier = "DEFAULT_PT_CN";
            Name = "Cn";
            ATMnumber = 112;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Copernicium";
    
            Update = &Element_CN::update;
        }
        //#TPT-Directive ElementHeader Element_CN static int update(UPDATE_FUNC_ARGS)
        int Element_CN::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CN::~Element_CN() {}
        