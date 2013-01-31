
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_RF PT_RF 247
        Element_RF::Element_RF() {
            Identifier = "DEFAULT_PT_RF";
            Name = "Rf";
            ATMnumber = 104;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Rutherfordium";
    
            Update = &Element_RF::update;
        }
        //#TPT-Directive ElementHeader Element_RF static int update(UPDATE_FUNC_ARGS)
        int Element_RF::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_RF::~Element_RF() {}
        