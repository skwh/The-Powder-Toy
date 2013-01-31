
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_AR PT_AR 189
        Element_AR::Element_AR() {
            Identifier = "DEFAULT_PT_AR";
            Name = "Ar";
            ATMnumber = 18;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Argon";
    
            Update = &Element_AR::update;
        }
        //#TPT-Directive ElementHeader Element_AR static int update(UPDATE_FUNC_ARGS)
        int Element_AR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_AR::~Element_AR() {}
        