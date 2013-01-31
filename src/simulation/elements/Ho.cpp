
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_HO PT_HO 272
        Element_HO::Element_HO() {
            Identifier = "DEFAULT_PT_HO";
            Name = "Ho";
            ATMnumber = 67;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Holmium";
    
            Update = &Element_HO::update;
        }
        //#TPT-Directive ElementHeader Element_HO static int update(UPDATE_FUNC_ARGS)
        int Element_HO::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_HO::~Element_HO() {}
        