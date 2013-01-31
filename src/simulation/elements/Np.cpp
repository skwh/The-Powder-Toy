
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_NP PT_NP 281
        Element_NP::Element_NP() {
            Identifier = "DEFAULT_PT_NP";
            Name = "Np";
            ATMnumber = 93;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Neptunium";
    
            Update = &Element_NP::update;
        }
        //#TPT-Directive ElementHeader Element_NP static int update(UPDATE_FUNC_ARGS)
        int Element_NP::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_NP::~Element_NP() {}
        