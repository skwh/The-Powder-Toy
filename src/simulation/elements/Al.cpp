
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_AL PT_AL 184
        Element_AL::Element_AL() {
            Identifier = "DEFAULT_PT_AL";
            Name = "Al";
            ATMnumber = 13;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Aluminium";
    
            Update = &Element_AL::update;
        }
        //#TPT-Directive ElementHeader Element_AL static int update(UPDATE_FUNC_ARGS)
        int Element_AL::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_AL::~Element_AL() {}
        