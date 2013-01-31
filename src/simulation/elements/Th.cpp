
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_TH PT_TH 278
        Element_TH::Element_TH() {
            Identifier = "DEFAULT_PT_TH";
            Name = "Th";
            ATMnumber = 90;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Thorium";
    
            Update = &Element_TH::update;
        }
        //#TPT-Directive ElementHeader Element_TH static int update(UPDATE_FUNC_ARGS)
        int Element_TH::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_TH::~Element_TH() {}
        