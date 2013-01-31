
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_AS PT_AS 204
        Element_AS::Element_AS() {
            Identifier = "DEFAULT_PT_AS";
            Name = "As";
            ATMnumber = 33;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Arsenic";
    
            Update = &Element_AS::update;
        }
        //#TPT-Directive ElementHeader Element_AS static int update(UPDATE_FUNC_ARGS)
        int Element_AS::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_AS::~Element_AS() {}
        