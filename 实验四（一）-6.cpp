#include <iostream>
using namespace std;
int count(const char s[], int counts[],int i)
{
	for (int j = 0; j < i; j++)//ͳ�Ƹ�����ĸ����
	{
		if(96<s[j]<123)
			counts[s[j] - 'A']++;
		if(64<s[j]<91)
			counts[s[j] - 'a']++;
	}
	char c;
	for(int k=0;k<26;k++)//������
	{
		if (counts[k] != 0)
		{
			c = 97 + k;
			cout << c << ":" << counts[k] << endl;
		}
	}
	return 0;
}
int main()
{
	cout << "������һ���ַ�����" << endl;
	char c;
	char s[999];
	int i = 0;//ͳ���ַ�������
	do
	{
		cin.get(c);
		s[i] = c;
		i++;
	} while (c != '\n');
	int counts[26] = { 0 };
	count(s, counts, i - 1);
	return 0;
}