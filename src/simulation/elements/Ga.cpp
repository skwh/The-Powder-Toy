
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_GA PT_GA 202
        Element_GA::Element_GA() {
            Identifier = "DEFAULT_PT_GA";
            Name = "Ga";
            ATMnumber = 31;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Gallium";
    
            Update = &Element_GA::update;
        }
        //#TPT-Directive ElementHeader Element_GA static int update(UPDATE_FUNC_ARGS)
        int Element_GA::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_GA::~Element_GA() {}
        