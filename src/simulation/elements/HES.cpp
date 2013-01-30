#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_HES PT_HES 168
Element_HES::Element_HES() {
	Identifier = "DEFAULT_PT_HES";
	Name = "HeS";
	Colour = PIXPACK(0xA9F5DC);
	MenuVisible = 1;
	MenuSection = SC_CRACKER2;
	Enabled = 1;

	Advection = 0.0f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 0.90f;
	Loss = 0.00f;
	Collision = 0.0f;
	Gravity = 0.0f;
	Diffusion = 0.0f;
	HotAir = 0.000f * CFDS;
	Falldown = 0;

	Flammable = 0;
	Explosive = 0;
	Meltable = 1;
	Hardness = 0;
	
	Weight = 100;
	
	Temperature = 0.95f;
	HeatConduct = 18;
	Description = "Solid Helium";

	State = ST_SOLID;
	Properties = TYPE_SOLID;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 1;
	HighTemperatureTransition = PT_HE;

	Update = &Element_HES::update;
}
//#TPT-Directive ElementHeader Element_HES static int update(UPDATE_FUNC_ARGS)
int Element_HES::update(UPDATE_FUNC_ARGS) {
	return 0;
}

Element_HES::~Element_HES() {}