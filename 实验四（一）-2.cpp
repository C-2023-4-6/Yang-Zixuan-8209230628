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
				swap(list[j], list[j + 1]);//ʹ��swap����
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
	cout << "������10��˫���ȵ�����" << endl;
	cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4]
		>> list[5] >> list[6] >> list[7] >> list[8] >> list[9];
	f(listSize, list);
	cout << "����������Ϊ��";
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << '\t';
	}
	return 0;
}