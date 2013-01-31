
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_NE PT_NE 181
        Element_NE::Element_NE() {
            Identifier = "DEFAULT_PT_NE";
            Name = "Ne";
            ATMnumber = 10;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Neon";
    
            Update = &Element_NE::update;
        }
        //#TPT-Directive ElementHeader Element_NE static int update(UPDATE_FUNC_ARGS)
        int Element_NE::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_NE::~Element_NE() {}
        