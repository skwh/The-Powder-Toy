
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_PO PT_PO 241
        Element_PO::Element_PO() {
            Identifier = "DEFAULT_PT_PO";
            Name = "Po";
            ATMnumber = 84;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Polonium";
    
            Update = &Element_PO::update;
        }
        //#TPT-Directive ElementHeader Element_PO static int update(UPDATE_FUNC_ARGS)
        int Element_PO::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_PO::~Element_PO() {}
        