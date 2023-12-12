#include <iostream>
using namespace std;
int count(const char s[], int counts[],int i)
{
	for (int j = 0; j < i; j++)//统计各个字母个数
	{
		if(96<s[j]<123)
			counts[s[j] - 'A']++;
		if(64<s[j]<91)
			counts[s[j] - 'a']++;
	}
	char c;
	for(int k=0;k<26;k++)//输出结果
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
	cout << "请输入一段字符串：" << endl;
	char c;
	char s[999];
	int i = 0;//统计字符串长度
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