
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_YB PT_YB 275
        Element_YB::Element_YB() {
            Identifier = "DEFAULT_PT_YB";
            Name = "Yb";
            ATMnumber = 70;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Ytterbium";
    
            Update = &Element_YB::update;
        }
        //#TPT-Directive ElementHeader Element_YB static int update(UPDATE_FUNC_ARGS)
        int Element_YB::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_YB::~Element_YB() {}
        