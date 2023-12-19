#include <iostream>
using namespace std;
class student
{
private:
	int No;
	int Score;
public:
	int get1()
	{
		return No;
	}
	int get2()
	{
		return Score;
	}
	student(int no=0,int score=0)
	{
		No = no, Score = score;
	}
};
void max(student s[])
{
	int i = 0;
	for (int j = 1; j < 5; j++)
	{
		if (s[i].get2() < s[j].get2())
		{
			student t;
			t = s[i];
			s[i] = s[j];
			s[j] = t;
		}
	}
}
int main()
{
	student s[5] = { student(1,94),
					 student(2,85),
					 student(3,96),
					 student(4,93),
					 student(5,87)};
	max(s);
	student* p = &s[0];
	cout << "成绩最高的学生的学号为："<<(*p).get1() << endl;
	return 0;
}