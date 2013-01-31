
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_PM PT_PM 266
        Element_PM::Element_PM() {
            Identifier = "DEFAULT_PT_PM";
            Name = "Pm";
            ATMnumber = 61;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Promethium";
    
            Update = &Element_PM::update;
        }
        //#TPT-Directive ElementHeader Element_PM static int update(UPDATE_FUNC_ARGS)
        int Element_PM::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_PM::~Element_PM() {}
        