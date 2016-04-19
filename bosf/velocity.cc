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
 * An artificial Earth satellite is in an elliptical orbit which brings
 * it to an altitude of 250 km at perigee and out to an altitude of 500
 * km at apogee. Calculate the velocity of the satellite at both perigee
 * and apogee.
 */


#include <iostream>
#include <orbmech/orbmech.h>


int
main(void)
{
	double	ap, per, vp, va;

	std::cout << "(Apogee) ";
	ap = get_altitude();

	std::cout << "(Perigee) ";
	per =  get_altitude();

	vp = velocity_perigee(per, ap);
	va = velocity_apogee(per, ap);

	std::cout << "Velocity at perigee: " << vp << " m/s\n";
	std::cout << "Velocity at apogee: " << va << " m/s\n";
}
