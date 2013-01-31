#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_LI PT_LI 174
Element_LI::Element_LI() {
	Identifier = "DEFAULT_PT_LI";
	Name = "Li";
	Colour = PIXPACK(0x949B94);
	ATMnumber = 3;
	MenuVisible = 1;
	MenuSection = SC_ELEMENTS;
	Enabled = 1;

	Advection = 0.0f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 0.90f;
	Loss = 0.00f;
	Collision = 0.0f;
	Gravity = 0.0f;
	Diffusion = 0.00f;
	HotAir = 0.000f * CFDS;
	Falldown = 0;

	Flammable = 0;
	Explosive = 0;
	Meltable = 1;
	Hardness = 1;

	Weight = 100;

	Temperature = R_TEMP + 273.15f;
	HeatConduct = 27;
	Description = "Lithium (Li). Reacts with water. Electrically conductive.";

	State = ST_SOLID;
	Properties = TYPE_SOLID|PROP_CONDUCTS;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 453.69f;
	HighTemperatureTransition = PT_LAVA;

	Update = &Element_LI::update;

}
//#TPT-Directive ElementHeader Element_LI static int update(UPDATE_FUNC_ARGS)
int Element_LI::update(UPDATE_FUNC_ARGS) {
	return 0;
}

Element_LI::~Element_LI() {}