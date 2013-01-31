
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_SN PT_SN 221
        Element_SN::Element_SN() {
            Identifier = "DEFAULT_PT_SN";
            Name = "Sn";
            ATMnumber = 50;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Tin";
    
            Update = &Element_SN::update;
        }
        //#TPT-Directive ElementHeader Element_SN static int update(UPDATE_FUNC_ARGS)
        int Element_SN::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_SN::~Element_SN() {}
        