
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_K PT_K 190
        Element_K::Element_K() {
            Identifier = "DEFAULT_PT_K";
            Name = "K";
            ATMnumber = 19;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Potassium";
    
            Update = &Element_K::update;
        }
        //#TPT-Directive ElementHeader Element_K static int update(UPDATE_FUNC_ARGS)
        int Element_K::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_K::~Element_K() {}
        