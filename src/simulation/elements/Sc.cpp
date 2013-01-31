
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_SC PT_SC 192
        Element_SC::Element_SC() {
            Identifier = "DEFAULT_PT_SC";
            Name = "Sc";
            ATMnumber = 21;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Scandium";
    
            Update = &Element_SC::update;
        }
        //#TPT-Directive ElementHeader Element_SC static int update(UPDATE_FUNC_ARGS)
        int Element_SC::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_SC::~Element_SC() {}
        