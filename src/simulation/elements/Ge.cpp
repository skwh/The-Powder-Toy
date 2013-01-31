
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_GE PT_GE 203
        Element_GE::Element_GE() {
            Identifier = "DEFAULT_PT_GE";
            Name = "Ge";
            ATMnumber = 32;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Germanium";
    
            Update = &Element_GE::update;
        }
        //#TPT-Directive ElementHeader Element_GE static int update(UPDATE_FUNC_ARGS)
        int Element_GE::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_GE::~Element_GE() {}
        