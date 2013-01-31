
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CF PT_CF 286
        Element_CF::Element_CF() {
            Identifier = "DEFAULT_PT_CF";
            Name = "Cf";
            ATMnumber = 98;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Californium";
    
            Update = &Element_CF::update;
        }
        //#TPT-Directive ElementHeader Element_CF static int update(UPDATE_FUNC_ARGS)
        int Element_CF::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CF::~Element_CF() {}
        