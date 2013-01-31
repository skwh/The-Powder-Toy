
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_IR PT_IR 234
        Element_IR::Element_IR() {
            Identifier = "DEFAULT_PT_IR";
            Name = "Ir";
            ATMnumber = 77;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Iridium";
    
            Update = &Element_IR::update;
        }
        //#TPT-Directive ElementHeader Element_IR static int update(UPDATE_FUNC_ARGS)
        int Element_IR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_IR::~Element_IR() {}
        