#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_ALPA PT_ALPA 171
Element_ALPA::Element_ALPA() {
	Identifier = "DEFAULT_PT_ALPA";
	Name = "ALPA";
	Colour = PIXPACK(0x81C9B2);
	MenuVisible = 1;
	MenuSection = SC_NUCLEAR;
	Enabled = 1;

	Advection = 0.0f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 1.00f;
	Collision = -0.99f;
	Gravity = 0.0f;
	Diffusion = 0.00f;
	HotAir = 0.000f * CFDS;
	Falldown = 0;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 0;
	
	Weight = -1;

	Temperature = R_TEMP + 273.15f;
	HeatConduct = 0;
	Description = "Alpha Particles. Creates He when combined with ELEC.";

	State = ST_GAS;
	Properties = TYPE_ENERGY|PROP_DEADLY;

	LowPressure = IPL;
    LowPressureTransition = NT;
    HighPressure = IPH;
    HighPressureTransition = NT;
    LowTemperature = ITL;
    LowTemperatureTransition = NT;
    HighTemperature = ITH;
    HighTemperatureTransition = NT;

	Update = &Element_ALPA::update;
}
//#TPT-Directive ElementHeader Element_ALPA static int update(UPDATE_FUNC_ARGS)
int Element_ALPA::update(UPDATE_FUNC_ARGS) {
	int r, rt, rx, ry, nb, rrx, rry;
	float rr, rrr;
	parts[i].pavg[0] = x;
	parts[i].pavg[1] = y;
	for (rx=-2; rx<=2; rx++)
		for (ry=-2; ry<=2; ry++)
			if (x+rx>=0 && y+ry>=0 && x+rx<XRES && y+ry<YRES) {
				r = pmap[y+ry][x+rx];
				rt = (r&0xFF);
				if (!r)
					r = sim->photons[y+ry][x+rx];
					rt = (r&0xFF);
					if (rt == PT_ELEC) {
						sim->part_change_type(i,x,y,PT_HE);
						sim->kill_part(r>>8);
					}
				if (!r)
					continue;
			}
	return 0;
}

Element_ALPA::~Element_ALPA() {}