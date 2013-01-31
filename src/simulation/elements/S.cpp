
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_S PT_S 187
        Element_S::Element_S() {
            Identifier = "DEFAULT_PT_S";
            Name = "S";
            ATMnumber = 16;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Sulfur";
    
            Update = &Element_S::update;
        }
        //#TPT-Directive ElementHeader Element_S static int update(UPDATE_FUNC_ARGS)
        int Element_S::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_S::~Element_S() {}
        