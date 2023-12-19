#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为私有的
	int hour;
	int minute;
	int sec;
public:
	void in();  //输入设定的时间 
	void out();
};
void Time::in()
{
	cin >> hour;
	cin >> minute;
	cin >> sec;
}
void Time::out()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
	Time t1;        //定义t1为Time类对象
	t1.in();
	t1.out();
	return 0;
}
