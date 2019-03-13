include "iostream"
#ifdef USE_TRIGONOMETRY_DEGREE
	include "trygonometria.h"
#else
	include "cmath"
#endif

int main()
{
	#ifdef USE_TRIGONOMETRY_DEGREE
		std::cout << degreemath::sin(45);
	#else
		std::cout << std::sin(45);
	#endif
	return 0;
}