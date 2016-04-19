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
 * A satellite in Earth orbit passes through its perigee point at
 * an altitude of 200 km above the Earth's surface and at a velocity of
 * 7,850 m/s.  Calculate the apogee altitude of the satellite.
 */


#include <iostream>
#include <orbmech/orbmech.h>


int
main(void)
{
	double	v, rp, ra, alt;

	std::cout << "Perigee altitude:\n";
	rp = get_altitude();
	v = get_velocity();

	ra = rp / ((2.0 * GM_MU) / (rp * (v * v)) - 1.0);
	alt = radius_to_altitude(ra);
	std::cout << "Altitude at apogee: " << alt << " km\n";

	return 0;
}
