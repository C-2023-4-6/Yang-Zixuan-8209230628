#include <iostream>
#include "student.h"          //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int num, const char name[20], char sex)
{
    this->num = num, this->sex = sex,
    memcpy(this->name, name, sizeof(name));
}
