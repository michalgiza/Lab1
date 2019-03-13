include "iostream"
#ifdef USE_TRIGONOMETRY_DEGREE
	include "trygonometria.h"
#else
	include "cmath"
#endif

int main(int argc, char *argv[])
{
	double degree = atof(argv[1]);

	#ifdef USE_TRIGONOMETRY_DEGREE
		std::cout << degreemath::sin(degree);
	#else
		std::cout << std::sin(degree);
	#endif
	return 0;
}