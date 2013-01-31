
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_RU PT_RU 215
        Element_RU::Element_RU() {
            Identifier = "DEFAULT_PT_RU";
            Name = "Ru";
            ATMnumber = 44;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Ruthenium";
    
            Update = &Element_RU::update;
        }
        //#TPT-Directive ElementHeader Element_RU static int update(UPDATE_FUNC_ARGS)
        int Element_RU::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_RU::~Element_RU() {}
        