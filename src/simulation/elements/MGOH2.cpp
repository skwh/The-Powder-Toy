#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_MGOH2 PT_MGOH2 170
Element_MGOH2::Element_MGOH2() {
	Identifier = "DEFAULT_PT_MGOH2";
	Name = "MgOH2";
	ATMnumber = 0;
	Colour = PIXPACK(0xBFC0B8);
	MenuVisible = 1;
	MenuSection = SC_CRACKER2;
	Enabled = 1;

	Advection = 0.7f;
	AirDrag = 0.02f * CFDS;
	AirLoss = 0.96f;
	Loss = 0.80f;
	Collision = 0.0f;
	Diffusion = 0.00f;
	Gravity = 0.1f;
	HotAir = 0.000f * CFDS;
	Falldown = 1;

	Flammable = 0;
	Explosive = 0;
	Meltable = 10;
	Hardness = 1;

	Weight = 100;

	Temperature = R_TEMP+273.15f;
	HeatConduct = 0;
	Description = "Magnesium Hydroxide.";

	State = ST_SOLID;
	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 623.15f;
	HighTemperatureTransition = PT_LAVA;

	Update = &Element_MGO::update;
}
//#TPT-Directive ElementHeader Element_MGOH2 static int update(UPDATE_FUNC_ARGS)
int Element_MGOH2::update(UPDATE_FUNC_ARGS) {
	return 0;
}

Element_MGOH2::~Element_MGOH2() {}