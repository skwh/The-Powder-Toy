
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_OS PT_OS 233
        Element_OS::Element_OS() {
            Identifier = "DEFAULT_PT_OS";
            Name = "Os";
            ATMnumber = 76;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Osmium";
    
            Update = &Element_OS::update;
        }
        //#TPT-Directive ElementHeader Element_OS static int update(UPDATE_FUNC_ARGS)
        int Element_OS::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_OS::~Element_OS() {}
        