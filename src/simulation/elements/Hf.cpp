
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_HF PT_HF 229
        Element_HF::Element_HF() {
            Identifier = "DEFAULT_PT_HF";
            Name = "Hf";
            ATMnumber = 72;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Hafnium";
    
            Update = &Element_HF::update;
        }
        //#TPT-Directive ElementHeader Element_HF static int update(UPDATE_FUNC_ARGS)
        int Element_HF::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_HF::~Element_HF() {}
        