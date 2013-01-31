
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_IN PT_IN 220
        Element_IN::Element_IN() {
            Identifier = "DEFAULT_PT_IN";
            Name = "In";
            ATMnumber = 49;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Indium";
    
            Update = &Element_IN::update;
        }
        //#TPT-Directive ElementHeader Element_IN static int update(UPDATE_FUNC_ARGS)
        int Element_IN::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_IN::~Element_IN() {}
        