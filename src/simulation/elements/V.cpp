
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_V PT_V 194
        Element_V::Element_V() {
            Identifier = "DEFAULT_PT_V";
            Name = "V";
            ATMnumber = 23;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Vanadium";
    
            Update = &Element_V::update;
        }
        //#TPT-Directive ElementHeader Element_V static int update(UPDATE_FUNC_ARGS)
        int Element_V::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_V::~Element_V() {}
        