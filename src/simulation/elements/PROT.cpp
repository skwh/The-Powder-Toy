#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_PROT PT_PROT 167
Element_PROT::Element_PROT()
{
    Identifier = "DEFAULT_PT_PROT";
    Name = "PROT";
    Colour = PIXPACK(0xD4D4D4);
    MenuVisible = 1;
    MenuSection = SC_NUCLEAR;
    Enabled = 1;
    
    Advection = 0.0f;
    AirDrag = 0.00f * CFDS;
    AirLoss = 1.00f;
    Loss = 1.00f;
    Collision = -0.99f;
    Gravity = 0.0f;
    Diffusion = 0.00f;
    HotAir = 0.000f	* CFDS;
    Falldown = 0;
    
    Flammable = 0;
    Explosive = 0;
    Meltable = 0;
    Hardness = 0;
    
    Weight = -1;
    
    Temperature = R_TEMP+900.0f+273.15f;
    HeatConduct = 0;
    Description = "Protons";
    
    State = ST_GAS;
    Properties = TYPE_ENERGY|PROP_LIFE_DEC|PROP_LIFE_KILL_DEC;
    
    LowPressure = IPL;
    LowPressureTransition = NT;
    HighPressure = IPH;
    HighPressureTransition = NT;
    LowTemperature = ITL;
    LowTemperatureTransition = NT;
    HighTemperature = ITH;
    HighTemperatureTransition = NT;
    
    Update = &Element_PROT::update;
    Graphics = &Element_PROT::graphics;
}

//#TPT-Directive ElementHeader Element_PROT static int update(UPDATE_FUNC_ARGS)
int Element_PROT::update(UPDATE_FUNC_ARGS)
 {
	int r, rt, rx, ry, nb, rrx, rry;
	float rr, rrr;
	parts[i].pavg[0] = x;
	parts[i].pavg[1] = y;
	for (rx=-2; rx<=2; rx++)
		for (ry=-2; ry<=2; ry++)
			if (x+rx>=0 && y+ry>=0 && x+rx<XRES && y+ry<YRES) {
				r = pmap[y+ry][x+rx];
				if (!r)
					r = sim->photons[y+ry][x+rx];
				if (!r)
					continue;
			}
	return 0;
}



//#TPT-Directive ElementHeader Element_PROT static int graphics(GRAPHICS_FUNC_ARGS)
int Element_PROT::graphics(GRAPHICS_FUNC_ARGS)

{
	
	*firea = 70;
	*firer = *colr;
	*fireg = *colg;
	*fireb = *colb;

	*pixel_mode |= FIRE_ADD;
	return 0;
}


Element_PROT::~Element_PROT() {}