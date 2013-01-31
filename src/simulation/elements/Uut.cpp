
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_UUT PT_UUT 256
        Element_UUT::Element_UUT() {
            Identifier = "DEFAULT_PT_UUT";
            Name = "Uut";
            ATMnumber = 113;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Ununtrium";
    
            Update = &Element_UUT::update;
        }
        //#TPT-Directive ElementHeader Element_UUT static int update(UPDATE_FUNC_ARGS)
        int Element_UUT::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_UUT::~Element_UUT() {}
        