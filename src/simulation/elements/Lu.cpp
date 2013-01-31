
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_LU PT_LU 276
        Element_LU::Element_LU() {
            Identifier = "DEFAULT_PT_LU";
            Name = "Lu";
            ATMnumber = 71;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Lutetium";
    
            Update = &Element_LU::update;
        }
        //#TPT-Directive ElementHeader Element_LU static int update(UPDATE_FUNC_ARGS)
        int Element_LU::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_LU::~Element_LU() {}
        