
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_GD PT_GD 269
        Element_GD::Element_GD() {
            Identifier = "DEFAULT_PT_GD";
            Name = "Gd";
            ATMnumber = 64;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Gadolinium";
    
            Update = &Element_GD::update;
        }
        //#TPT-Directive ElementHeader Element_GD static int update(UPDATE_FUNC_ARGS)
        int Element_GD::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_GD::~Element_GD() {}
        