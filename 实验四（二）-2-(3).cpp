#include <iostream>
using namespace std;
int as(int* list,int size)//��С��������
{
	bool changed;//��doѭ�����涨��
	do
	{
		changed = false;//����ʡ�ԣ�ÿ��doѭ���ظ�false
		for(int i=0;i<size-1;i++)//ע����size-1
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
	/*������̬����*/
	int* dm;
	int size;
	cout << "����������Ԫ�ظ�����" << endl;
	cin >> size;
	dm = new int[size];
	cout << "����������Ԫ�أ�" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> dm[i];
	}
	cout << dm <<'\t' <<&dm<<'\t'<<*dm<<endl;
	/*�������С�����������*/
	as(dm, size);
	cout << "��С��������Ϊ��";
	for (int i = 0; i < size; i++)
	{
		cout << dm[i] << '\t';
	}
	delete[]dm;//�ͷ������ڴ�
	return 0;
}