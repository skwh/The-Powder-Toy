
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_TM PT_TM 274
        Element_TM::Element_TM() {
            Identifier = "DEFAULT_PT_TM";
            Name = "Tm";
            ATMnumber = 69;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Thulium";
    
            Update = &Element_TM::update;
        }
        //#TPT-Directive ElementHeader Element_TM static int update(UPDATE_FUNC_ARGS)
        int Element_TM::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_TM::~Element_TM() {}
        