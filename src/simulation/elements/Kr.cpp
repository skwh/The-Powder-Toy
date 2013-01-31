
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_KR PT_KR 207
        Element_KR::Element_KR() {
            Identifier = "DEFAULT_PT_KR";
            Name = "Kr";
            ATMnumber = 36;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Krypton";
    
            Update = &Element_KR::update;
        }
        //#TPT-Directive ElementHeader Element_KR static int update(UPDATE_FUNC_ARGS)
        int Element_KR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_KR::~Element_KR() {}
        