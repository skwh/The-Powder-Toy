
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_RH PT_RH 216
        Element_RH::Element_RH() {
            Identifier = "DEFAULT_PT_RH";
            Name = "Rh";
            ATMnumber = 45;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Rhodium";
    
            Update = &Element_RH::update;
        }
        //#TPT-Directive ElementHeader Element_RH static int update(UPDATE_FUNC_ARGS)
        int Element_RH::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_RH::~Element_RH() {}
        