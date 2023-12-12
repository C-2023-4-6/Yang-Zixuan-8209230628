#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 10;
	int a[SIZE] = { 0 };
	cout << "输入十个数，将输出不同的数" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> a[i];
	}
	cout << a[0];
	for (int i = 1; i < SIZE; i++)//不重复则输出，重复则不输出
	{
		int k = a[i];
		bool isRepitition = false;//设置bool值判断
		for (int j = i; j > 0; j--)//从后往前比较
		{
			if (k == a[j - 1])
			{
				isRepitition = true;
				break;
			}
		}
		if (!isRepitition)//!isRepitition与isRepitition相反
				cout << a[i];
	}
	return 0;
}