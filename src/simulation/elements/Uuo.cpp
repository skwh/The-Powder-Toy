
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_UUO PT_UUO 261
        Element_UUO::Element_UUO() {
            Identifier = "DEFAULT_PT_UUO";
            Name = "Uuo";
            ATMnumber = 118;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Ununoctium";
    
            Update = &Element_UUO::update;
        }
        //#TPT-Directive ElementHeader Element_UUO static int update(UPDATE_FUNC_ARGS)
        int Element_UUO::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_UUO::~Element_UUO() {}
        