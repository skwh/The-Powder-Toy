
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_BK PT_BK 285
        Element_BK::Element_BK() {
            Identifier = "DEFAULT_PT_BK";
            Name = "Bk";
            ATMnumber = 97;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Berkelium";
    
            Update = &Element_BK::update;
        }
        //#TPT-Directive ElementHeader Element_BK static int update(UPDATE_FUNC_ARGS)
        int Element_BK::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_BK::~Element_BK() {}
        