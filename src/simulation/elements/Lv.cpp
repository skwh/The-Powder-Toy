
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_LV PT_LV 259
        Element_LV::Element_LV() {
            Identifier = "DEFAULT_PT_LV";
            Name = "Lv";
            ATMnumber = 116;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Livermorium";
    
            Update = &Element_LV::update;
        }
        //#TPT-Directive ElementHeader Element_LV static int update(UPDATE_FUNC_ARGS)
        int Element_LV::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_LV::~Element_LV() {}
        