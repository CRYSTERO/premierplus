/**
 * 内联函数的作用是 加快程序的运行速度。
 * 内联函数的定义方式就是加一个inline关键字而已，其余和普通函数定义一样，但是内联函数真正的作用是在
 * 程序的运行是。编译成汇编和机器代码后，内联函数 不需要 JMP 到某个位置执行特定的代码再回来
 * 但是，内联函数需要更多的内存。如果一个程序在十个不同的地方调用了同样的内联函数，
 * 那么内存中就需要十个这个内联函数的副本。
 */
#include "iostream"

using namespace std;

inline double square(double x) {return x * x;}

int main(int argc,char *argv[])
{
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5  + 7.5);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << square(c++) << endl;
    return 0;
}