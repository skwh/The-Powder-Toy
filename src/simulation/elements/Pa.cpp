
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_PA PT_PA 279
        Element_PA::Element_PA() {
            Identifier = "DEFAULT_PT_PA";
            Name = "Pa";
            ATMnumber = 91;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Protactinium";
    
            Update = &Element_PA::update;
        }
        //#TPT-Directive ElementHeader Element_PA static int update(UPDATE_FUNC_ARGS)
        int Element_PA::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_PA::~Element_PA() {}
        