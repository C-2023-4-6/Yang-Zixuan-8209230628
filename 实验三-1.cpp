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
}//��շת����������������
int lcm(int &x, int &y,int &z)
{
	int c, d, l;
	c = x / z;
	d = y / z;
	l = z * c * d;
	return l;
}//����С������
int main()
{
	int m = 0;
	int n = 0;
	cout << "������������Ȼ��" << endl;
	cin >> m >> n;
	cout << m << "��" << n << "����������ǣ�" << gcd(m, n) << endl;
	int g = gcd(m, n);
	cout << m << "��" << n << "����С�������ǣ�" << lcm(m,n,g) << endl;
	return 0;
}