#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
public:
	void in();  //�����趨��ʱ�� 
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
	Time t1;        //����t1ΪTime�����
	t1.in();
	t1.out();
	return 0;
}
