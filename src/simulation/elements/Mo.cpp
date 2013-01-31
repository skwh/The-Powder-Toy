
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_MO PT_MO 213
        Element_MO::Element_MO() {
            Identifier = "DEFAULT_PT_MO";
            Name = "Mo";
            ATMnumber = 42;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Molybdenum";
    
            Update = &Element_MO::update;
        }
        //#TPT-Directive ElementHeader Element_MO static int update(UPDATE_FUNC_ARGS)
        int Element_MO::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_MO::~Element_MO() {}
        