#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_MGO PT_MGO 173
Element_MGO::Element_MGO() {
	Identifier = "DEFAULT_PT_MGO";
	Name = "MgO";
	Colour = PIXPACK(0xFFFFFE);
	ATMnumber = 0;
	MenuVisible = 1;
	MenuSection = SC_CRACKER2;
	Enabled = 1;

	Advection = 0.7f;
	AirDrag = 0.02f * CFDS;
	AirLoss = 0.96f;
	Loss = 0.80f;
	Collision = 0.0f;
	Gravity = 0.1f;
	Diffusion = 0.00f;
	HotAir = 0.000f * CFDS;
	Falldown = 1;

	Flammable = 0;
	Explosive = 0;
	Meltable = 1;
	Hardness = 1;

	Weight = 100;

	Temperature = R_TEMP+273.15f;
	HeatConduct = 0;
	Description = "Magnesium Oxide (MgO).";

	State = ST_SOLID;
	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 3125;
	HighTemperatureTransition = PT_LAVA;

	Update = &Element_MGO::update;

}
//#TPT-Directive ElementHeader Element_MGO static int update(UPDATE_FUNC_ARGS)
int Element_MGO::update(UPDATE_FUNC_ARGS) {
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
				
			}
		}
	}
	return 0;
}

Element_MGO::~Element_MGO() {}