
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_DY PT_DY 271
        Element_DY::Element_DY() {
            Identifier = "DEFAULT_PT_DY";
            Name = "Dy";
            ATMnumber = 66;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Dysprosium";
    
            Update = &Element_DY::update;
        }
        //#TPT-Directive ElementHeader Element_DY static int update(UPDATE_FUNC_ARGS)
        int Element_DY::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_DY::~Element_DY() {}
        