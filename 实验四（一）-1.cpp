#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 10;
	int a[SIZE] = { 0 };
	cout << "����ʮ�������������ͬ����" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> a[i];
	}
	cout << a[0];
	for (int i = 1; i < SIZE; i++)//���ظ���������ظ������
	{
		int k = a[i];
		bool isRepitition = false;//����boolֵ�ж�
		for (int j = i; j > 0; j--)//�Ӻ���ǰ�Ƚ�
		{
			if (k == a[j - 1])
			{
				isRepitition = true;
				break;
			}
		}
		if (!isRepitition)//!isRepitition��isRepitition�෴
				cout << a[i];
	}
	return 0;
}