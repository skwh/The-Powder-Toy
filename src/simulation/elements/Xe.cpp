
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_XE PT_XE 225
        Element_XE::Element_XE() {
            Identifier = "DEFAULT_PT_XE";
            Name = "Xe";
            ATMnumber = 54;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Xenon";
    
            Update = &Element_XE::update;
        }
        //#TPT-Directive ElementHeader Element_XE static int update(UPDATE_FUNC_ARGS)
        int Element_XE::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_XE::~Element_XE() {}
        