
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_DS PT_DS 253
        Element_DS::Element_DS() {
            Identifier = "DEFAULT_PT_DS";
            Name = "Ds";
            ATMnumber = 110;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Darmstadtium";
    
            Update = &Element_DS::update;
        }
        //#TPT-Directive ElementHeader Element_DS static int update(UPDATE_FUNC_ARGS)
        int Element_DS::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_DS::~Element_DS() {}
        