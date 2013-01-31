
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_AM PT_AM 283
        Element_AM::Element_AM() {
            Identifier = "DEFAULT_PT_AM";
            Name = "Am";
            ATMnumber = 95;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Americium";
    
            Update = &Element_AM::update;
        }
        //#TPT-Directive ElementHeader Element_AM static int update(UPDATE_FUNC_ARGS)
        int Element_AM::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_AM::~Element_AM() {}
        