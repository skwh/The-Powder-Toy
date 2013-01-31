
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_EU PT_EU 268
        Element_EU::Element_EU() {
            Identifier = "DEFAULT_PT_EU";
            Name = "Eu";
            ATMnumber = 63;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Europium";
    
            Update = &Element_EU::update;
        }
        //#TPT-Directive ElementHeader Element_EU static int update(UPDATE_FUNC_ARGS)
        int Element_EU::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_EU::~Element_EU() {}
        