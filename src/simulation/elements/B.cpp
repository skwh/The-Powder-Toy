
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_B PT_B 176
        Element_B::Element_B() {
            Identifier = "DEFAULT_PT_B";
            Name = "B";
            ATMnumber = 5;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Boron";
    
            Update = &Element_B::update;
        }
        //#TPT-Directive ElementHeader Element_B static int update(UPDATE_FUNC_ARGS)
        int Element_B::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_B::~Element_B() {}
        