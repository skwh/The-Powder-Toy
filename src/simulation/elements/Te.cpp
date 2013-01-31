
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_TE PT_TE 223
        Element_TE::Element_TE() {
            Identifier = "DEFAULT_PT_TE";
            Name = "Te";
            ATMnumber = 52;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Tellurium";
    
            Update = &Element_TE::update;
        }
        //#TPT-Directive ElementHeader Element_TE static int update(UPDATE_FUNC_ARGS)
        int Element_TE::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_TE::~Element_TE() {}
        