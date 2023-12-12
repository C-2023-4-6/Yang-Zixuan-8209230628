#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int p;
	char s = 0;
	for (int i = 2; i < num; i++) 
	{
		s = 1;
		p = num % i;
		if (p==0)
		{
			s = 0;
			break;
		}
	}
	return s;
}//判断一个数是否为素数
int main() 
{
	int j = 0;//统计素数个数
	int n = 2;//从2开始判断
	while (j < 200)
	{
		if (is_prime(n) == 1)
		{
			cout << n << '\t';
			j++;
			if (j % 10 == 0)
				cout << endl;
		}
		n++;
	}
	return 0;
}