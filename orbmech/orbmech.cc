/*
 * Copyright (c) 2015 Kyle Isom <coder@kyleisom.net>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */


#include <iostream>
#include <cmath>

#include <orbmech/orbmech.h>


double
altitude_to_radius(double r)
{
	return (r - RADIUS_EARTH) / 1000.0;
}


double
radius_to_altitude(double r)
{
	return (r / 1000.0) - RADIUS_EARTH;
}


double
circv(double r)
{
	return sqrt(GM_MU / r);
}


double
get_altitude()
{
	double	alt;

	std::cout << "Altitude (km): ";
	std::cin >> alt;	
	return (alt + RADIUS_EARTH) * 1000.0;
}


double
get_velocity()
{
	double	v;

	std::cout << "Velocity (m/s): ";
	std::cin >> v;
	return v;
}


double
eccentricity_from_vr(double vp, double rp)
{
	return (rp * (vp * vp)) / GM_MU - 1.0;
}


double
circp(double r)
{
	return sqrt(4 * (M_PI * M_PI) * (r * r * r) / GM_MU);
}


static double
cuberoot(double n)
{
	return pow(n, (1.0 / 3.0));
}


double
circr_from_p(double p)
{
	return cuberoot((GM_MU * (p * p)) / (4 * (M_PI * M_PI)));
}


double
velocity_perigee(double rp, double ra)
{
	return sqrt((2.0 * GM_MU * ra) / (rp * (rp + ra)));
}


double
velocity_apogee(double rp, double ra)
{
	return sqrt((2.0 * GM_MU * rp) / (ra * (rp + ra)));
}
