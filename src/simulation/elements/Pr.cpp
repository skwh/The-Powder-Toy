
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_PR PT_PR 264
        Element_PR::Element_PR() {
            Identifier = "DEFAULT_PT_PR";
            Name = "Pr";
            ATMnumber = 59;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Praseodymium";
    
            Update = &Element_PR::update;
        }
        //#TPT-Directive ElementHeader Element_PR static int update(UPDATE_FUNC_ARGS)
        int Element_PR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_PR::~Element_PR() {}
        