
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_TB PT_TB 270
        Element_TB::Element_TB() {
            Identifier = "DEFAULT_PT_TB";
            Name = "Tb";
            ATMnumber = 65;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Terbium";
    
            Update = &Element_TB::update;
        }
        //#TPT-Directive ElementHeader Element_TB static int update(UPDATE_FUNC_ARGS)
        int Element_TB::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_TB::~Element_TB() {}
        