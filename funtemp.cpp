/**
 * 8.10
 * 函数泛型的使用
 * 指定泛型，编译器会根据穿的数据类型即使生成那个版本的函数。
 * 但是模板这个东西并不会出现在最后的机器代码里，编译器仍然会生成两个不同类型的函数。
 */
#include "iostream"

using namespace std;

template <typename T>

void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(int argc,char *argv[])
{
    int i = 10;
    int j = 20;
    cout << "int swap: " << endl;
    Swap(i, j);
    cout << "i = " << i <<" j = " << j << endl;

    double m = 10;
    double n = 20;
    cout << "double swap: " << endl;
    Swap(m, n);
    cout << "m = " << m <<" n = " << n << endl;
    return 0;
}