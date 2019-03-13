#include "trygonometria.h"
#include <cmath>
double degreemath::sin(double degree) 
{
	double radian = degree*(3.14/180);
	return std::sin(radian);
}