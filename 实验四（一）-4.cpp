#include <iostream>
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list3[])
{
	for (int i=0; i < size1; i++)
		list3[i] = list1[i];
	for (int j=0;j<size2;j++)
	{
		list3[size1+j] = list2[j];
	}
}
void aso(int list3[], int size3)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size3 - 1; j++)
			if (list3[j] > list3[j + 1])
			{
				swap(list3[j], list3[j + 1]);
				changed = true;
			}
	} while (changed);
	cout << "The merged list is:";
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int size1, size2, size3;
	int list1[80] = { 0 };
	int list2[80] = { 0 };
	int list3[160] = { 0 };
	cout << "Enter size1:" << endl;
	cin >> size1;
	cout << "Enter list1:" << endl;
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter size2:" << endl;
	cin >> size2;
	cout << "Enter list1:" << endl;
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	size3 = size1 + size2;
	merge(list1, size1, list2, size2, list3);
	aso(list3, size3);
	return 0;
}