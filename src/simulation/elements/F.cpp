
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_F PT_F 180
        Element_F::Element_F() {
            Identifier = "DEFAULT_PT_F";
            Name = "F";
            ATMnumber = 9;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Fluorine";
    
            Update = &Element_F::update;
        }
        //#TPT-Directive ElementHeader Element_F static int update(UPDATE_FUNC_ARGS)
        int Element_F::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_F::~Element_F() {}
        