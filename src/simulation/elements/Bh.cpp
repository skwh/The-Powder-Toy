
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_BH PT_BH 250
        Element_BH::Element_BH() {
            Identifier = "DEFAULT_PT_BH";
            Name = "Bh";
            ATMnumber = 107;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Bohrium";
    
            Update = &Element_BH::update;
        }
        //#TPT-Directive ElementHeader Element_BH static int update(UPDATE_FUNC_ARGS)
        int Element_BH::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_BH::~Element_BH() {}
        