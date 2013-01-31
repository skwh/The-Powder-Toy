
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CM PT_CM 284
        Element_CM::Element_CM() {
            Identifier = "DEFAULT_PT_CM";
            Name = "Cm";
            ATMnumber = 96;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Curium";
    
            Update = &Element_CM::update;
        }
        //#TPT-Directive ElementHeader Element_CM static int update(UPDATE_FUNC_ARGS)
        int Element_CM::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CM::~Element_CM() {}
        