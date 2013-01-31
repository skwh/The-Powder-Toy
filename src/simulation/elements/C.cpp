
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_C PT_C 177
        Element_C::Element_C() {
            Identifier = "DEFAULT_PT_C";
            Name = "C";
            ATMnumber = 6;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Carbon";
    
            Update = &Element_C::update;
        }
        //#TPT-Directive ElementHeader Element_C static int update(UPDATE_FUNC_ARGS)
        int Element_C::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_C::~Element_C() {}
        