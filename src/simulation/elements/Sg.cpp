
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_SG PT_SG 249
        Element_SG::Element_SG() {
            Identifier = "DEFAULT_PT_SG";
            Name = "Sg";
            ATMnumber = 106;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Seaborgium";
    
            Update = &Element_SG::update;
        }
        //#TPT-Directive ElementHeader Element_SG static int update(UPDATE_FUNC_ARGS)
        int Element_SG::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_SG::~Element_SG() {}
        