
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CO PT_CO 198
        Element_CO::Element_CO() {
            Identifier = "DEFAULT_PT_CO";
            Name = "Co";
            ATMnumber = 27;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Cobalt";
    
            Update = &Element_CO::update;
        }
        //#TPT-Directive ElementHeader Element_CO static int update(UPDATE_FUNC_ARGS)
        int Element_CO::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CO::~Element_CO() {}
        