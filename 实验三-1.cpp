#include <iostream>
using namespace std;
int gcd(int &x, int &y)
{
	int a, b, i;
	if (x >= y)
	{
		a = x; b = y;
	}
	else
	{
		a = x; b = y;
	}
	do
	{
		i = a % b;
		a = b;
		b = i;
	} while (i);
	return a;
}//用辗转相除法计算最大公因数
int lcm(int &x, int &y,int &z)
{
	int c, d, l;
	c = x / z;
	d = y / z;
	l = z * c * d;
	return l;
}//求最小公倍数
int main()
{
	int m = 0;
	int n = 0;
	cout << "请输入两个自然数" << endl;
	cin >> m >> n;
	cout << m << "和" << n << "的最大公因数是：" << gcd(m, n) << endl;
	int g = gcd(m, n);
	cout << m << "和" << n << "的最小公倍数是：" << lcm(m,n,g) << endl;
	return 0;
}