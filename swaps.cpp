/**
 * 三种方法传参方式对实际值的改变：
 * 使用引用和指针，都会修改源值的值。
 * 但是如果使用形参，函数里的任何操作都不会对另一个函数里的变量值做出改变。
 */
#include "iostream"

using namespace std;

void swapr(int & a, int & b); /*使用 引用*/
void swapp(int * p, int * q); /*使用 指针*/
void swapv(int a, int b); /*使用 形参*/

int main(int argc,char *argv[])
{
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "Wallet1 has: " << wallet1 << endl;
    cout << "Wallet2 has: " << wallet2 << endl;

    cout << "Using refrence:" << endl;
    swapr(wallet1, wallet2);
    cout << "Wallet1 has: " << wallet1 << endl;
    cout << "Wallet2 has: " << wallet2 << endl;

    cout << "Using pointers:" << endl;
    swapp(&wallet1, &wallet2);
    cout << "Wallet1 has: " << wallet1 << endl;
    cout << "Wallet2 has: " << wallet2 << endl;

    cout << "Using params:" << endl;
    swapv(wallet1, wallet2);
    cout << "Wallet1 has: " << wallet1 << endl;
    cout << "Wallet2 has: " << wallet2 << endl;
    return 0;
}

void swapr(int & a, int & b)
{
    int temp;
    temp = b;
    b = a;
    a= temp;
}

void swapp(int * p, int * q)
{
    int temp;
    temp = *q;
    *q = *p;
    *p = temp;
}

void swapv(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a= temp;
}