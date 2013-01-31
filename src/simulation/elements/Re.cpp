
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_RE PT_RE 232
        Element_RE::Element_RE() {
            Identifier = "DEFAULT_PT_RE";
            Name = "Re";
            ATMnumber = 75;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Rhenium";
    
            Update = &Element_RE::update;
        }
        //#TPT-Directive ElementHeader Element_RE static int update(UPDATE_FUNC_ARGS)
        int Element_RE::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_RE::~Element_RE() {}
        