#include <iostream>
using namespace std;
int as(int* list,int size)//从小到大排序
{
	bool changed;//在do循环外面定义
	do
	{
		changed = false;//不能省略，每次do循环回复false
		for(int i=0;i<size-1;i++)//注意是size-1
		if (list[i] > list[i + 1])
		{
			swap(list[i],list[i + 1]);
			changed = true;
		}
	} while (changed);
	return 0;
}
int main() 
{
	/*创建动态数组*/
	int* dm;
	int size;
	cout << "请输入数组元素个数：" << endl;
	cin >> size;
	dm = new int[size];
	cout << "请输入数组元素：" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> dm[i];
	}
	cout << dm <<'\t' <<&dm<<'\t'<<*dm<<endl;
	/*将数组从小到大排序并输出*/
	as(dm, size);
	cout << "从小到大排列为：";
	for (int i = 0; i < size; i++)
	{
		cout << dm[i] << '\t';
	}
	delete[]dm;//释放数组内存
	return 0;
}