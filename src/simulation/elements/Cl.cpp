
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_CL PT_CL 188
        Element_CL::Element_CL() {
            Identifier = "DEFAULT_PT_CL";
            Name = "Cl";
            ATMnumber = 17;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Chlorine";
    
            Update = &Element_CL::update;
        }
        //#TPT-Directive ElementHeader Element_CL static int update(UPDATE_FUNC_ARGS)
        int Element_CL::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_CL::~Element_CL() {}
        