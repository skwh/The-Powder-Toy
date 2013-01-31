
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CR PT_CR 195
        Element_CR::Element_CR() {
            Identifier = "DEFAULT_PT_CR";
            Name = "Cr";
            ATMnumber = 24;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Chromium";
    
            Update = &Element_CR::update;
        }
        //#TPT-Directive ElementHeader Element_CR static int update(UPDATE_FUNC_ARGS)
        int Element_CR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CR::~Element_CR() {}
        