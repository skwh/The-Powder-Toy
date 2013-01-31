
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_AT PT_AT 242
        Element_AT::Element_AT() {
            Identifier = "DEFAULT_PT_AT";
            Name = "At";
            ATMnumber = 85;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Astatine";
    
            Update = &Element_AT::update;
        }
        //#TPT-Directive ElementHeader Element_AT static int update(UPDATE_FUNC_ARGS)
        int Element_AT::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_AT::~Element_AT() {}
        