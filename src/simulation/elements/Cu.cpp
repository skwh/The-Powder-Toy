
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CU PT_CU 200
        Element_CU::Element_CU() {
            Identifier = "DEFAULT_PT_CU";
            Name = "Cu";
            ATMnumber = 29;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Copper";
    
            Update = &Element_CU::update;
        }
        //#TPT-Directive ElementHeader Element_CU static int update(UPDATE_FUNC_ARGS)
        int Element_CU::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CU::~Element_CU() {}
        