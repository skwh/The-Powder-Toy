
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_TI PT_TI 193
        Element_TI::Element_TI() {
            Identifier = "DEFAULT_PT_TI";
            Name = "Ti";
            ATMnumber = 22;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Titanium";
    
            Update = &Element_TI::update;
        }
        //#TPT-Directive ElementHeader Element_TI static int update(UPDATE_FUNC_ARGS)
        int Element_TI::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_TI::~Element_TI() {}
        