#include <iostream>
using namespace std;
int sum(int d)//d为天数
{
	int s;//s为剩余的桃子数
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
	cout << "猴子第一天摘了" << sum(1) << "个桃子" << endl;
	return 0;
}