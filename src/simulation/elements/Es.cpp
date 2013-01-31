
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_ES PT_ES 287
        Element_ES::Element_ES() {
            Identifier = "DEFAULT_PT_ES";
            Name = "Es";
            ATMnumber = 99;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Einsteinium";
    
            Update = &Element_ES::update;
        }
        //#TPT-Directive ElementHeader Element_ES static int update(UPDATE_FUNC_ARGS)
        int Element_ES::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_ES::~Element_ES() {}
        