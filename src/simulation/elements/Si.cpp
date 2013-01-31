
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_SI PT_SI 185
        Element_SI::Element_SI() {
            Identifier = "DEFAULT_PT_SI";
            Name = "Si";
            ATMnumber = 14;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Silicon";
    
            Update = &Element_SI::update;
        }
        //#TPT-Directive ElementHeader Element_SI static int update(UPDATE_FUNC_ARGS)
        int Element_SI::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_SI::~Element_SI() {}
        