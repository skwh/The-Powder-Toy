
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_PD PT_PD 217
        Element_PD::Element_PD() {
            Identifier = "DEFAULT_PT_PD";
            Name = "Pd";
            ATMnumber = 46;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Palladium";
    
            Update = &Element_PD::update;
        }
        //#TPT-Directive ElementHeader Element_PD static int update(UPDATE_FUNC_ARGS)
        int Element_PD::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_PD::~Element_PD() {}
        