#include <iostream>
using namespace std;
int parseHex(const char* const hexString) 
{
	double n = 0;//n��ʾʮ������
	double p = 2; int q = 2;//ʮ���������м�λ
	double j = 16;
	for (int i = 0; i < q; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'G')
		{
			n = n + (hexString[i] - 55) * pow(j, p - 1);
		}
		if (hexString[i] >= 48 && hexString[i] <= 57)
		{
			n = n + (hexString[i] - 48) * pow(j, p - 1);
		}
		p--;
	}
	return n;
}
int main()
{
	cout << "ת����ʮ����Ϊ��" << parseHex("A5") << endl;
	return 0;
}