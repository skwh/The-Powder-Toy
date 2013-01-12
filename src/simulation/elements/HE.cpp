#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_HE PT_HE 168
Element_HE::Element_HE() 
{
	Identifier = "DEFAULT_PT_HE";
	Name = "HE";
	Colour = PIXPACK(0xA9F5DC);
	MenuVisible = 1;
	MenuSection = SC_GAS;
	Enabled = 1;

	Advection = 2.0f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 0.99f;
	Loss = 0.30f;
	Collision = -0.1f;
	Gravity = 0.1f;
	Diffusion = 1.0f;
	HotAir = 0.000f * CFDS;
	Falldown = 0;

	Flammable = 1;
	Explosive = 0;
	Meltable = 0;
	Hardness = 0;
	
	Weight = 1;
	
	Temperature = R_TEMP + 273.15f;
	HeatConduct = 18;
	Description = "Helium Gas";

	State = ST_GAS;
	Properties = TYPE_GAS;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = 1;
	LowTemperatureTransition = PT_HES;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;

	Update = &Element_HE::update;
	Graphics = &Element_HE::graphics;
}

//#TPT-Directive ElementHeader Element_HE static int update(UPDATE_FUNC_ARGS)
int Element_HE::update(UPDATE_FUNC_ARGS) {
	int r, rx, ry;
	for (rx=-2;rx<3;rx++) {
		for (ry=-2;ry<3;ry++) {
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry)) {
			
			}
		}
	}
	return 0;
}
//#TPT-Directive ElementHeader Element_HE static int graphics(GRAPHICS_FUNC_ARGS)
int Element_HE::graphics(GRAPHICS_FUNC_ARGS) {
	return 0;
}

Element_HE::~Element_HE() {}