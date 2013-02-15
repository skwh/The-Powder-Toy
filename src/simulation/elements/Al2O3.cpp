#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_Al2O3 PT_Al2O3 292
Element_Al2O3::Element_Al2O3() {
	Identifier = "DEFAULT_PT_Al2O3";
	Name = "Al2O3";
	Colour = PIXPACK(0xBBAE9B);
	MenuVisible = 1;
	MenuSection = SC_CRACKER2;
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
	Description = "Aluminium Oxide";
    
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

	Update = &Element_Al2O3::update;
}
//#TPT-Directive ElementHeader Element_Al2O3 static int update(UPDATE_FUNC_ARGS)
int Element_Al2O3::update(UPDATE_FUNC_ARGS) {
	return 0;
}
Element_Al2O3::~Element_Al2O3() {}