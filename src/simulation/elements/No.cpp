
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_NO PT_NO 290
        Element_NO::Element_NO() {
            Identifier = "DEFAULT_PT_NO";
            Name = "No";
            ATMnumber = 102;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Nobelium";
    
            Update = &Element_NO::update;
        }
        //#TPT-Directive ElementHeader Element_NO static int update(UPDATE_FUNC_ARGS)
        int Element_NO::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_NO::~Element_NO() {}
        