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
}//�ж�һ�����Ƿ�Ϊ����
int main() 
{
	int j = 0;//ͳ����������
	int n = 2;//��2��ʼ�ж�
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