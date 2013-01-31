
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_AU PT_AU 236
        Element_AU::Element_AU() {
            Identifier = "DEFAULT_PT_AU";
            Name = "Au";
            ATMnumber = 79;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Gold";
    
            Update = &Element_AU::update;
        }
        //#TPT-Directive ElementHeader Element_AU static int update(UPDATE_FUNC_ARGS)
        int Element_AU::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_AU::~Element_AU() {}
        