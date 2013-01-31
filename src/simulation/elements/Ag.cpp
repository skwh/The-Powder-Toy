
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_AG PT_AG 218
        Element_AG::Element_AG() {
            Identifier = "DEFAULT_PT_AG";
            Name = "Ag";
            ATMnumber = 47;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Silver";
    
            Update = &Element_AG::update;
        }
        //#TPT-Directive ElementHeader Element_AG static int update(UPDATE_FUNC_ARGS)
        int Element_AG::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_AG::~Element_AG() {}
        