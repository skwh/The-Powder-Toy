
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_NB PT_NB 212
        Element_NB::Element_NB() {
            Identifier = "DEFAULT_PT_NB";
            Name = "Nb";
            ATMnumber = 41;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Niobium";
    
            Update = &Element_NB::update;
        }
        //#TPT-Directive ElementHeader Element_NB static int update(UPDATE_FUNC_ARGS)
        int Element_NB::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_NB::~Element_NB() {}
        