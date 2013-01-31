
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_MD PT_MD 289
        Element_MD::Element_MD() {
            Identifier = "DEFAULT_PT_MD";
            Name = "Md";
            ATMnumber = 101;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Mendelevium";
    
            Update = &Element_MD::update;
        }
        //#TPT-Directive ElementHeader Element_MD static int update(UPDATE_FUNC_ARGS)
        int Element_MD::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_MD::~Element_MD() {}
        