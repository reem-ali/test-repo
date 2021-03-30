#include <iostream>
#include "../header/circle.hpp"
using namespace std;

int main(){
	Circle c(10);
	cout << "A circle of radius 10 has an area of " << c.area() << endl;
	cout << "A circle of radius 10 has a perimeter of " << c.perimeter() << endl;
	return 0;
}

