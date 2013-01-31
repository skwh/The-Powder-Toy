
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_AC PT_AC 277
        Element_AC::Element_AC() {
            Identifier = "DEFAULT_PT_AC";
            Name = "Ac";
            ATMnumber = 89;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Actinium";
    
            Update = &Element_AC::update;
        }
        //#TPT-Directive ElementHeader Element_AC static int update(UPDATE_FUNC_ARGS)
        int Element_AC::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_AC::~Element_AC() {}
        