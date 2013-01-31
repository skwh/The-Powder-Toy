
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CA PT_CA 191
        Element_CA::Element_CA() {
            Identifier = "DEFAULT_PT_CA";
            Name = "Ca";
            ATMnumber = 20;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Calcium";
    
            Update = &Element_CA::update;
        }
        //#TPT-Directive ElementHeader Element_CA static int update(UPDATE_FUNC_ARGS)
        int Element_CA::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CA::~Element_CA() {}
        