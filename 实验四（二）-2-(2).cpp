#include <iostream>
using namespace std;
int parseHex(const char* const hexString) 
{
	double n = 0;//n表示十进制数
	double p = 2; int q = 2;//十六进制数有几位
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
	cout << "转换成十进制为：" << parseHex("A5") << endl;
	return 0;
}