/**
 * 函数的默认值的设定。如果调用函数时给明了参数的值，那么就用给的值。
 * 如果没有给明值(比如就没传参)，就用默认值。
 */
#include "iostream"
#include "cmath"

#define inSize 80

using namespace std;
//注意，默认参数仅可于函数定义时给定，此后不能再次给定！
char* left(const char* str, int n = 1)
{
    char * newStr = new char [n +1];
    int i = 0;
    for (; i < min((int)strlen(str), n); i++)
    {
        newStr[i] = str[i];
    }
    newStr[i] = '\0';
    return newStr;
}

int main(int argc,char *argv[])
{
    char str[inSize];
    cout << "The string you want: " << endl;
    cin.get(str, inSize);
    char* res1 = left(str, 3);
    cout << res1 << endl;
    char* res2 = left(str);
    cout << res2 << endl;
    return 0;
}
