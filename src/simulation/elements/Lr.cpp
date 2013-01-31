
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_LR PT_LR 291
        Element_LR::Element_LR() {
            Identifier = "DEFAULT_PT_LR";
            Name = "Lr";
            ATMnumber = 103;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Lawrencium";
    
            Update = &Element_LR::update;
        }
        //#TPT-Directive ElementHeader Element_LR static int update(UPDATE_FUNC_ARGS)
        int Element_LR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_LR::~Element_LR() {}
        