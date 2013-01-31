#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_MG PT_MG 183
Element_MG::Element_MG() {
	Identifier = "DEFAULT_PT_MG";
	Name = "Mg";
	Colour = PIXPACK(0x969A8B);
	ATMnumber = 12;
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

	Temperature = R_TEMP+273.15f;
	HeatConduct = 94.74f;
	Description = "Magnesium (Mg). Reacts slowly with water.";

	State = ST_SOLID;
	Properties = TYPE_SOLID;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 923;
	HighTemperatureTransition = PT_LAVA; //TODO: Add Molten States

	Update = &Element_MG::update;
}
//#TPT-Directive ElementHeader Element_MG static int update(UPDATE_FUNC_ARGS)
int Element_MG::update(UPDATE_FUNC_ARGS) {
	int r, rx, ry, rt;
	parts[i].pavg[0] = x;
	parts[i].pavg[1] = y;
	for (rx=-2;rx<3;rx++) {
		for (ry=-2;ry<3;ry++) {
			if (x+rx>=0 && y+ry>=0 && x+rx<XRES && y+ry<YRES && pmap[y+ry][x+rx] &&
                (pmap[y+ry][x+rx]&0xFF)!=PT_MG&&
                (pmap[y+ry][x+rx]&0xFF)!=0xFF) {
				r = sim->pmap[y+ry][x+rx];
				rt = (r&0xFF);
				if (rt == PT_FIRE) {
					sim->part_change_type(i,x,y,PT_MGO);
				}
			}
		}
	}
	return 0;
}

Element_MG::~Element_MG() {}