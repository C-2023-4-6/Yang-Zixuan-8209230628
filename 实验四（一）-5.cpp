#include <iostream>
using namespace std;
int indexOf(char s1[], char s2[],int size1,int size2) 
{
	int p = 0;
	if (size1 > size2)
		p = 0;
	else
	{
		for (int i = 0; i < size2; i++)
		{
			if (s1[0] == s2[i])
			{
				int k = i + 1;//记录第几个字母开始相同
				for (int j = 1; j < size1; j++)
				{
					p = 0;
					i++;
					if (s1[j] == s2[i])
					{
						p = 1;
					}
					else break;
				}
				if (p == 1)
					p = k;
				break;
			}
		}
	}
	if (p == 0)
		p = -1;
	return p;
}
int main()
{
	char s1[999], s2[999];
	char c;
	cout << "Enter the first string:" << endl;
	int i = 0;//统计字符长度
	do 
	{
		cin.get(c);
		s1[i] = c;
		i++;
	} while (c != '\n');
	cout << "Enter the second string:" << endl;
	int j = 0;
	do 
	{
		cin.get(c);
		s2[j] = c;
		j++;
	} while (c != '\n');
	cout << "结果为(包括空格）："<<indexOf(s1, s2, i - 1, j - 1) << endl;
	return 0;
}