
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_ZR PT_ZR 211
        Element_ZR::Element_ZR() {
            Identifier = "DEFAULT_PT_ZR";
            Name = "Zr";
            ATMnumber = 40;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Zirconium";
    
            Update = &Element_ZR::update;
        }
        //#TPT-Directive ElementHeader Element_ZR static int update(UPDATE_FUNC_ARGS)
        int Element_ZR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_ZR::~Element_ZR() {}
        