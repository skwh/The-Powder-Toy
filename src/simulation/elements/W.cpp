
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_W PT_W 231
        Element_W::Element_W() {
            Identifier = "DEFAULT_PT_W";
            Name = "W";
            ATMnumber = 74;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Tungsten";
    
            Update = &Element_W::update;
        }
        //#TPT-Directive ElementHeader Element_W static int update(UPDATE_FUNC_ARGS)
        int Element_W::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_W::~Element_W() {}
        