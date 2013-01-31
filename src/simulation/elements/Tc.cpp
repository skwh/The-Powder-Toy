
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_TC PT_TC 214
        Element_TC::Element_TC() {
            Identifier = "DEFAULT_PT_TC";
            Name = "Tc";
            ATMnumber = 43;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Technetium";
    
            Update = &Element_TC::update;
        }
        //#TPT-Directive ElementHeader Element_TC static int update(UPDATE_FUNC_ARGS)
        int Element_TC::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_TC::~Element_TC() {}
        