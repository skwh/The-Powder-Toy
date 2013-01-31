
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_Y PT_Y 210
        Element_Y::Element_Y() {
            Identifier = "DEFAULT_PT_Y";
            Name = "Y";
            ATMnumber = 39;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Yttrium";
    
            Update = &Element_Y::update;
        }
        //#TPT-Directive ElementHeader Element_Y static int update(UPDATE_FUNC_ARGS)
        int Element_Y::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_Y::~Element_Y() {}
        