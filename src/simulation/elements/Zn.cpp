
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_ZN PT_ZN 201
        Element_ZN::Element_ZN() {
            Identifier = "DEFAULT_PT_ZN";
            Name = "Zn";
            ATMnumber = 30;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Zinc";
    
            Update = &Element_ZN::update;
        }
        //#TPT-Directive ElementHeader Element_ZN static int update(UPDATE_FUNC_ARGS)
        int Element_ZN::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_ZN::~Element_ZN() {}
        