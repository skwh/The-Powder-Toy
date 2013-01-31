
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_RN PT_RN 243
        Element_RN::Element_RN() {
            Identifier = "DEFAULT_PT_RN";
            Name = "Rn";
            ATMnumber = 86;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Radon";
    
            Update = &Element_RN::update;
        }
        //#TPT-Directive ElementHeader Element_RN static int update(UPDATE_FUNC_ARGS)
        int Element_RN::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_RN::~Element_RN() {}
        