#include <iostream>
using namespace std;
int f(int listSize,double list[])
{
	bool changed;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);//使用swap函数
				changed = true;
			}
		}
	} 
	while (changed);
	return 0;
}

int main()
{
	int listSize = 10;
	double list[10] = { 0 };
	cout << "请输入10个双精度的数字" << endl;
	cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4]
		>> list[5] >> list[6] >> list[7] >> list[8] >> list[9];
	f(listSize, list);
	cout << "按升序排列为：";
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << '\t';
	}
	return 0;
}