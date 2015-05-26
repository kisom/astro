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


/*
 * Problem:
 * A satellite is launched into Earth orbit where its launch vehicle burns
 * out at an altitude of 250 km.  At burnout the satellite's velocity is
 * 7,900 m/s with the zenith angle equal to 89 degrees. Burnout
 * occurs 2000-10-20, 15:00 UT. The geocentric coordinates at burnout
 * are 32o N latitude, 60o W longitude, and the azimuth heading is 86o.
 * Calculate the orbit's inclination, argument of perigee, and longitude
 * of ascending node.
*/


#include <iostream>
#include <cmath>
#include <orbmech/orbmech.h>
using namespace std;


int
main(void)
{
	double	c, v, alt, gamma;
	double	ap, per;
	double	dis, div, sin_gamma2;

	std::cout << "Burnout zenith angle: ";
	std::cin >> gamma;
	gamma = deg_to_rad(gamma);

	std::cout << "(Burnout) ";
	alt = get_altitude();

	std::cout << "(Burnout) ";
	v = get_velocity();

}
