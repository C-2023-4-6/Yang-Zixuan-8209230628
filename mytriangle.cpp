#include <iostream>
#include "mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	char p = 1;
	if ((side1 + side2 < side3) || (side1 + side3 < side2) || (side2 + side3 < side1))
	{
		cout << "错误，不能组成三角形" << endl;
		p = 0;
	}
	return p;
}
double is_area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	double a = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	cout << "三角形的面积为" << a << endl;
	return 0;
}