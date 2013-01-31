
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_FR PT_FR 244
        Element_FR::Element_FR() {
            Identifier = "DEFAULT_PT_FR";
            Name = "Fr";
            ATMnumber = 87;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Francium";
    
            Update = &Element_FR::update;
        }
        //#TPT-Directive ElementHeader Element_FR static int update(UPDATE_FUNC_ARGS)
        int Element_FR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_FR::~Element_FR() {}
        