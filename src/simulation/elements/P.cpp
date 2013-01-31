
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_P PT_P 186
        Element_P::Element_P() {
            Identifier = "DEFAULT_PT_P";
            Name = "P";
            ATMnumber = 15;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Phosphorus";
    
            Update = &Element_P::update;
        }
        //#TPT-Directive ElementHeader Element_P static int update(UPDATE_FUNC_ARGS)
        int Element_P::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_P::~Element_P() {}
        