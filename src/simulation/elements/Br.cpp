
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_BR PT_BR 206
        Element_BR::Element_BR() {
            Identifier = "DEFAULT_PT_BR";
            Name = "Br";
            ATMnumber = 35;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Bromine";
    
            Update = &Element_BR::update;
        }
        //#TPT-Directive ElementHeader Element_BR static int update(UPDATE_FUNC_ARGS)
        int Element_BR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_BR::~Element_BR() {}
        