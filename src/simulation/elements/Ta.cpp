
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_TA PT_TA 230
        Element_TA::Element_TA() {
            Identifier = "DEFAULT_PT_TA";
            Name = "Ta";
            ATMnumber = 73;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Tantalum";
    
            Update = &Element_TA::update;
        }
        //#TPT-Directive ElementHeader Element_TA static int update(UPDATE_FUNC_ARGS)
        int Element_TA::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_TA::~Element_TA() {}
        