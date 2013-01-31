
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_HS PT_HS 251
        Element_HS::Element_HS() {
            Identifier = "DEFAULT_PT_HS";
            Name = "Hs";
            ATMnumber = 108;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Hassium";
    
            Update = &Element_HS::update;
        }
        //#TPT-Directive ElementHeader Element_HS static int update(UPDATE_FUNC_ARGS)
        int Element_HS::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_HS::~Element_HS() {}
        