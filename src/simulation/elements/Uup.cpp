
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_UUP PT_UUP 258
        Element_UUP::Element_UUP() {
            Identifier = "DEFAULT_PT_UUP";
            Name = "Uup";
            ATMnumber = 115;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Ununpentium";
    
            Update = &Element_UUP::update;
        }
        //#TPT-Directive ElementHeader Element_UUP static int update(UPDATE_FUNC_ARGS)
        int Element_UUP::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_UUP::~Element_UUP() {}
        