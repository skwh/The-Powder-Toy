
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_ER PT_ER 273
        Element_ER::Element_ER() {
            Identifier = "DEFAULT_PT_ER";
            Name = "Er";
            ATMnumber = 68;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Erbium";
    
            Update = &Element_ER::update;
        }
        //#TPT-Directive ElementHeader Element_ER static int update(UPDATE_FUNC_ARGS)
        int Element_ER::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_ER::~Element_ER() {}
        