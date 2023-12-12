#include <iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
	double side1;
	double side2;
	double side3;
	cout << "请输入三角形的三边长" << endl;
	cin >> side1 >> side2 >> side3;
	char p=is_valid (side1, side2, side3);
	if (p)
		is_area(side1, side2, side3);
	return 0;
}