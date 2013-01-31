
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_UUS PT_UUS 260
        Element_UUS::Element_UUS() {
            Identifier = "DEFAULT_PT_UUS";
            Name = "Uus";
            ATMnumber = 117;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Ununseptium";
    
            Update = &Element_UUS::update;
        }
        //#TPT-Directive ElementHeader Element_UUS static int update(UPDATE_FUNC_ARGS)
        int Element_UUS::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_UUS::~Element_UUS() {}
        