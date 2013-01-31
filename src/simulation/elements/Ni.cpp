
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_NI PT_NI 199
        Element_NI::Element_NI() {
            Identifier = "DEFAULT_PT_NI";
            Name = "Ni";
            ATMnumber = 28;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Nickel";
    
            Update = &Element_NI::update;
        }
        //#TPT-Directive ElementHeader Element_NI static int update(UPDATE_FUNC_ARGS)
        int Element_NI::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_NI::~Element_NI() {}
        