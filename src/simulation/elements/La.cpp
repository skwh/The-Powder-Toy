
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_LA PT_LA 262
        Element_LA::Element_LA() {
            Identifier = "DEFAULT_PT_LA";
            Name = "La";
            ATMnumber = 57;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Lanthanum";
    
            Update = &Element_LA::update;
        }
        //#TPT-Directive ElementHeader Element_LA static int update(UPDATE_FUNC_ARGS)
        int Element_LA::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_LA::~Element_LA() {}
        