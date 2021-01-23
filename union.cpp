/**
 * C++共用体的定义和使用与结构体类似。
 * 结构体可以同时同时存放不同种类的数据，但是共用体同时只能存储一种数据类型的变量。
 * 但是，结构体里不能定义抽象数据类型，包括string！！！因为编译器不知道该如何初始化类构造器。
 */
#include "iostream"

using namespace std;

union Aha
{
    int integer;
    float floater;
};

int main(int argc,char *argv[])
{
    Aha aha;
    aha.integer = 100;
    //当给其中的int变量赋值后，另一个float变量的值就会丢失
    cout << aha.integer << endl;cout << aha.floater << endl;
    aha.floater = 10.01;
    //当给其中的float变量赋值后，另一个int变量的值就会丢失
    cout << aha.integer << endl;cout << aha.floater << endl;
    return 0;
}
