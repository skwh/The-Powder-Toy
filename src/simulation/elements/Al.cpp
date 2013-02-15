#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_AL PT_AL 184
Element_AL::Element_AL() {
	Identifier = "DEFAULT_PT_AL";
	Name = "Al";
	ATMnumber = 13;
	Colour = PIXPACK(0xBFBDC2);
	MenuVisible = 1;
	MenuSection = SC_ELEMENTS;
	Enabled = 1;

	Advection = 0.0f;
	AirDrag = 0.00f* CFDS;
	AirLoss = 0.90f;
	Loss = 0.00f;
	Collision = 0.0f;
	Gravity = 0.0f;
	Diffusion = 0.00f;
	HotAir = 0.000f * CFDS;
	Falldown = 0;

	Flammable = 0;
	Explosive = 0;
	Meltable = 50;
	Hardness = 50;

	Weight = 100;

	Temperature = R_TEMP+273.15f;
	HeatConduct = 0;
	Description = "Aluminium";
    
	State = ST_SOLID;
	Properties = TYPE_SOLID|PROP_CONDUCTS|PROP_LIFE_DEC;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 933.47f;
	HighTemperatureTransition = PT_LAVA;

	Update = &Element_AL::update;
}
//#TPT-Directive ElementHeader Element_AL static int update(UPDATE_FUNC_ARGS)
int Element_AL::update(UPDATE_FUNC_ARGS) {
	return 0;
 }

Element_AL::~Element_AL() {}        