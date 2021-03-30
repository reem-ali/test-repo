#include "../header/circle.hpp"
#include <cmath>

double Circle::area() {
	return M_PI * radius * radius;
}

double Circle::perimeter() {
	return 2 * M_PI * radius;
}


