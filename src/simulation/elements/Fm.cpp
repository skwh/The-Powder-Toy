
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_FM PT_FM 288
        Element_FM::Element_FM() {
            Identifier = "DEFAULT_PT_FM";
            Name = "Fm";
            ATMnumber = 100;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Fermium";
    
            Update = &Element_FM::update;
        }
        //#TPT-Directive ElementHeader Element_FM static int update(UPDATE_FUNC_ARGS)
        int Element_FM::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_FM::~Element_FM() {}
        