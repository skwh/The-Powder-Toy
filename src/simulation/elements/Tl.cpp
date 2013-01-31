
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_TL PT_TL 238
        Element_TL::Element_TL() {
            Identifier = "DEFAULT_PT_TL";
            Name = "Tl";
            ATMnumber = 81;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Thallium";
    
            Update = &Element_TL::update;
        }
        //#TPT-Directive ElementHeader Element_TL static int update(UPDATE_FUNC_ARGS)
        int Element_TL::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_TL::~Element_TL() {}
        