#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_PB PT_PB 170
Element_PB::Element_PB() {
	Identifier = "DEFAULT_PT_PB";
	Name = "PB";
	Colour = PIXPACK(0x72C1DB);
	ATMnumber = 82;
	MenuVisible = 1;
	MenuSection = SC_SOLIDS;
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

	Temperature = R_TEMP+273.15f;
	HeatConduct = 754;
	Description = "Lead (Pb, Plumbum). Blocks Neutrons without destroying them.";

	State = ST_SOLID;
	Properties = TYPE_SOLID|PROP_DEADLY;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 600.6f;
	HighTemperatureTransition = PT_LAVA;

	Update = &Element_PB::update;

}

//#TPT-Directive ElementHeader Element_PB static int update(UPDATE_FUNC_ARGS)
int Element_PB::update(UPDATE_FUNC_ARGS) {
	int r, rx, ry, rt;
	for (rx=-2;rx<3;rx++) {
		for (ry=-2;ry<3;ry++) {
			if (x+rx>=0 && y+ry>=0 && x+rx>=XRES && y+ry>=YRES && (rx||ry)) {
				r = pmap[y+ry][x+rx];
				rt = (r&0xFF);
				if (!r)
					continue;
				if (rt == PT_NEUT) {
					parts[i].life = 1000;
				}
			}
		}
	}
	return 0;
}

Element_PB::~Element_PB() {}