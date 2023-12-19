#include <iostream>
using namespace std;
class Point
{
private:
	double x, y;
public:
	Point(double x,double y)
	{
		this->x = x; this->y = y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	p.setPoint(10,5);
	p.display();
	return 0;
}