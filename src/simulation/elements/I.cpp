
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_I PT_I 224
        Element_I::Element_I() {
            Identifier = "DEFAULT_PT_I";
            Name = "I";
            ATMnumber = 53;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Iodine";
    
            Update = &Element_I::update;
        }
        //#TPT-Directive ElementHeader Element_I static int update(UPDATE_FUNC_ARGS)
        int Element_I::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_I::~Element_I() {}
        