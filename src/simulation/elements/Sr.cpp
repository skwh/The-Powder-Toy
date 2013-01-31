
        #include "simulation/Elements.h"
        //#TPT-Directive ElementClass Element_SR PT_SR 209
        Element_SR::Element_SR() {
            Identifier = "DEFAULT_PT_SR";
            Name = "Sr";
            ATMnumber = 38;
            MenuVisible = 1;
            MenuSection = SC_ELEMENTS;
	    Enabled = 1;

            Description = "Strontium";
    
            Update = &Element_SR::update;
        }
        //#TPT-Directive ElementHeader Element_SR static int update(UPDATE_FUNC_ARGS)
        int Element_SR::update(UPDATE_FUNC_ARGS) {
            return 0;
        }

        Element_SR::~Element_SR() {}
        