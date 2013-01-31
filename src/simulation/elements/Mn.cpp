
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_MN PT_MN 196
        Element_MN::Element_MN() {
            Identifier = "DEFAULT_PT_MN";
            Name = "Mn";
            ATMnumber = 25;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Manganese";
    
            Update = &Element_MN::update;
        }
        //#TPT-Directive ElementHeader Element_MN static int update(UPDATE_FUNC_ARGS)
        int Element_MN::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_MN::~Element_MN() {}
        