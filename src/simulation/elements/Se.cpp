
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_SE PT_SE 205
        Element_SE::Element_SE() {
            Identifier = "DEFAULT_PT_SE";
            Name = "Se";
            ATMnumber = 34;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Selenium";
    
            Update = &Element_SE::update;
        }
        //#TPT-Directive ElementHeader Element_SE static int update(UPDATE_FUNC_ARGS)
        int Element_SE::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_SE::~Element_SE() {}
        