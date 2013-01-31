
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_FL PT_FL 257
        Element_FL::Element_FL() {
            Identifier = "DEFAULT_PT_FL";
            Name = "Fl";
            ATMnumber = 114;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Flerovium";
    
            Update = &Element_FL::update;
        }
        //#TPT-Directive ElementHeader Element_FL static int update(UPDATE_FUNC_ARGS)
        int Element_FL::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_FL::~Element_FL() {}
        