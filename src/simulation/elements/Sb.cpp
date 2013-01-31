
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_SB PT_SB 222
        Element_SB::Element_SB() {
            Identifier = "DEFAULT_PT_SB";
            Name = "Sb";
            ATMnumber = 51;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Antimony";
    
            Update = &Element_SB::update;
        }
        //#TPT-Directive ElementHeader Element_SB static int update(UPDATE_FUNC_ARGS)
        int Element_SB::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_SB::~Element_SB() {}
        