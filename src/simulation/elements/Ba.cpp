
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_BA PT_BA 227
        Element_BA::Element_BA() {
            Identifier = "DEFAULT_PT_BA";
            Name = "Ba";
            ATMnumber = 56;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Barium";
    
            Update = &Element_BA::update;
        }
        //#TPT-Directive ElementHeader Element_BA static int update(UPDATE_FUNC_ARGS)
        int Element_BA::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_BA::~Element_BA() {}
        