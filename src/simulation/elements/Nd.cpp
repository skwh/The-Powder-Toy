
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_ND PT_ND 265
        Element_ND::Element_ND() {
            Identifier = "DEFAULT_PT_ND";
            Name = "Nd";
            ATMnumber = 60;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Neodymium";
    
            Update = &Element_ND::update;
        }
        //#TPT-Directive ElementHeader Element_ND static int update(UPDATE_FUNC_ARGS)
        int Element_ND::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_ND::~Element_ND() {}
        