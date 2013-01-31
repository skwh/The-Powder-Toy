
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_BI PT_BI 240
        Element_BI::Element_BI() {
            Identifier = "DEFAULT_PT_BI";
            Name = "Bi";
            ATMnumber = 83;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Bismuth";
    
            Update = &Element_BI::update;
        }
        //#TPT-Directive ElementHeader Element_BI static int update(UPDATE_FUNC_ARGS)
        int Element_BI::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_BI::~Element_BI() {}
        