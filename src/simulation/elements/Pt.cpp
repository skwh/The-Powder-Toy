
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_PT PT_PT 235
        Element_PT::Element_PT() {
            Identifier = "DEFAULT_PT_PT";
            Name = "Pt";
            ATMnumber = 78;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Platinum";
    
            Update = &Element_PT::update;
        }
        //#TPT-Directive ElementHeader Element_PT static int update(UPDATE_FUNC_ARGS)
        int Element_PT::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_PT::~Element_PT() {}
        