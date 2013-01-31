
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CE PT_CE 263
        Element_CE::Element_CE() {
            Identifier = "DEFAULT_PT_CE";
            Name = "Ce";
            ATMnumber = 58;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Cerium";
    
            Update = &Element_CE::update;
        }
        //#TPT-Directive ElementHeader Element_CE static int update(UPDATE_FUNC_ARGS)
        int Element_CE::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CE::~Element_CE() {}
        