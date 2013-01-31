
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_DB PT_DB 248
        Element_DB::Element_DB() {
            Identifier = "DEFAULT_PT_DB";
            Name = "Db";
            ATMnumber = 105;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Dubnium";
    
            Update = &Element_DB::update;
        }
        //#TPT-Directive ElementHeader Element_DB static int update(UPDATE_FUNC_ARGS)
        int Element_DB::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_DB::~Element_DB() {}
        