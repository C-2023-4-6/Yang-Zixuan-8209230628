#include <iostream>
using namespace std;
class cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void in()
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void volume()
	{
		double v = length * width * height;
		cout << v << endl;
	}
};
int main()
{
	cuboid c1;
	c1.in();
	c1.volume();

	cuboid c2;
	c2.in();
	c2.volume();

	cuboid c3;
	c3.in();
	c3.volume();
	return 0;
}