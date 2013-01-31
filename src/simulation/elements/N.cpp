
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_N PT_N 178
        Element_N::Element_N() {
            Identifier = "DEFAULT_PT_N";
            Name = "N";
            ATMnumber = 7;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Nitrogen";
    
            Update = &Element_N::update;
        }
        //#TPT-Directive ElementHeader Element_N static int update(UPDATE_FUNC_ARGS)
        int Element_N::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_N::~Element_N() {}
        