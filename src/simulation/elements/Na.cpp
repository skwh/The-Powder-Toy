
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_NA PT_NA 182
        Element_NA::Element_NA() {
            Identifier = "DEFAULT_PT_NA";
            Name = "Na";
            ATMnumber = 11;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Sodium";
    
            Update = &Element_NA::update;
        }
        //#TPT-Directive ElementHeader Element_NA static int update(UPDATE_FUNC_ARGS)
        int Element_NA::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_NA::~Element_NA() {}
        