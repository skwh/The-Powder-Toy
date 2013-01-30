
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_BE PT_BE 175
        Element_BE::Element_BE() {
            Identifier = "DEFAULT_PT_BE";
            Name = "Be";
            ATMnumber = 4;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Beryllium";
    
            Update = &Element_BE::update;
        }
        //#TPT-Directive ElementHeader Element_BE static int update(UPDATE_FUNC_ARGS)
        int Element_BE::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_BE::~Element_BE() {}
        