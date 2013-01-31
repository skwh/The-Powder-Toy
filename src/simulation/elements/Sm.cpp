
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_SM PT_SM 267
        Element_SM::Element_SM() {
            Identifier = "DEFAULT_PT_SM";
            Name = "Sm";
            ATMnumber = 62;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Samarium";
    
            Update = &Element_SM::update;
        }
        //#TPT-Directive ElementHeader Element_SM static int update(UPDATE_FUNC_ARGS)
        int Element_SM::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_SM::~Element_SM() {}
        