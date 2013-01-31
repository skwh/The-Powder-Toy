
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_MT PT_MT 252
        Element_MT::Element_MT() {
            Identifier = "DEFAULT_PT_MT";
            Name = "Mt";
            ATMnumber = 109;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Meitnerium";
    
            Update = &Element_MT::update;
        }
        //#TPT-Directive ElementHeader Element_MT static int update(UPDATE_FUNC_ARGS)
        int Element_MT::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_MT::~Element_MT() {}
        