
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CD PT_CD 219
        Element_CD::Element_CD() {
            Identifier = "DEFAULT_PT_CD";
            Name = "Cd";
            ATMnumber = 48;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Cadmium";
    
            Update = &Element_CD::update;
        }
        //#TPT-Directive ElementHeader Element_CD static int update(UPDATE_FUNC_ARGS)
        int Element_CD::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CD::~Element_CD() {}
        