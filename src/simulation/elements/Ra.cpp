
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_RA PT_RA 245
        Element_RA::Element_RA() {
            Identifier = "DEFAULT_PT_RA";
            Name = "Ra";
            ATMnumber = 88;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Radium";
    
            Update = &Element_RA::update;
        }
        //#TPT-Directive ElementHeader Element_RA static int update(UPDATE_FUNC_ARGS)
        int Element_RA::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_RA::~Element_RA() {}
        