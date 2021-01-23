#include "iostream"
#include "mytime0.h"
#include "mytime0.cpp"

using namespace std;

int main(int argc,char *argv[])
{
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "Planning: ";
    planning.show();

    cout << "Coding:" ;
    coding.show();

    cout << "Fixing: " ;
    fixing.show();

    //这里用运算符重载直接计算两个Time实例的时间总和。
    total = coding + fixing;
    cout << "Total: ";
    total.show();
    return 0;
}
