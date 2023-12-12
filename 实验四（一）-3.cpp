#include <iostream>
using namespace std;
int main()
{
	const int size = 100;
	bool sc[size];
	for (int i = 0; i < size; i++)
		sc[i] = false;
	for (int j = 0; j < size; j++)
	{
		for (int k = j; k < size; k += j + 1)//第j+1个人操作,*不能写成k+=k+1
		{
			if (sc[k])
				sc[k] = false;
			else
				sc[k] = true;
		}//bool型数据取反操作
	}
	for (int m = 0; m < size; m++)
	{
		if (sc[m])
			cout << m + 1<<" ";
	}
	return 0;
}