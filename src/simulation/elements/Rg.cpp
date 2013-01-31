
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_RG PT_RG 254
        Element_RG::Element_RG() {
            Identifier = "DEFAULT_PT_RG";
            Name = "Rg";
            ATMnumber = 111;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Roentgenium";
    
            Update = &Element_RG::update;
        }
        //#TPT-Directive ElementHeader Element_RG static int update(UPDATE_FUNC_ARGS)
        int Element_RG::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_RG::~Element_RG() {}
        