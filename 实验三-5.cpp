#include <iostream>
using namespace std;
int sum(int d)//dΪ����
{
	int s;//sΪʣ���������
	if (d==10)
		s = 1;
	else
	{
		s = 2 * (sum(d + 1) + 1);
	}
	return s;
}
int main()
{
	cout << "���ӵ�һ��ժ��" << sum(1) << "������" << endl;
	return 0;
}