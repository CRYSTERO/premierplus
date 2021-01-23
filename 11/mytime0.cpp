#include "iostream"
#include "mytime0.h"

using namespace std;

Time :: Time()
{
    hours = 0;
    minutes = 0;
}

Time ::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time :: addMin(int m)
{
    minutes += m;
    hours += m / 60;
    minutes %= 60;
}

void Time ::addHr(int h)
{
    hours += h;
}

void Time ::reset(int h, int m)
{
    minutes = m;
    hours = h;
}

//定义运算符重载
//operator关键字后加上一个运算符 作为函数的名称，这样对于这个类所有的实例，使用这个运算符就是
//自己所规定的效果。比如这里规定一个Time实例 + 另一个Time实例事实上就是调用一个求和的函数。
//这就是运算符重载。
Time Time ::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time ::show() const
{
    cout << hours << minutes << endl;
}