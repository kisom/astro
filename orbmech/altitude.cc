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
 * A satellite in Earth orbit has a semi-major axis of 6,700 km and an
 * eccentricity of 0.01.  Calculate the satellite's altitude at both
 * perigee and apogee.
 */


#include <iostream>
#include <orbmech/orbmech.h>
using namespace std;


int
main(void)
{
	double	a, e, apogee, perigee;

	cout << "Semi-major axis (km): ";
	cin >> a;
	a *= 1000;

	cout << "Eccentricity: ";
	cin >> e;

	apogee = radius_to_altitude(a * (1.0 + e));
	perigee = radius_to_altitude(a * (1.0 - e));
	cout << "Altitude at apogee:  " << apogee << " km\n";
	cout << "Altitude at perigee: " << perigee << " km\n";

	return 0;
}
