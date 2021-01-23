/**
 * 传统C风格字符串的返回。
 * 返回字符串的指针。
 */
#include "iostream"

using namespace std;

char* buildString(char ch, int n);
int main(int argc,char *argv[])
{
    int n;
    char ch;

    cout << "The char to fill: " << endl;
    cin >> ch;
    cout << "How many to fill: " << endl;
    cin >> n;
    char* ptr = buildString(ch, n);
    cout << ptr << endl;
    delete [] ptr;/*流用完后就要及时回收内存空间*/
    ptr = buildString('+', 20);
    cout << ptr << "-DONE-" << ptr << endl;
    delete [] ptr;
    return 0;
}

char* buildString(char ch, int n)
{
    char* ptr = new char [n+1];/*使用new关键字创建字字符数组，注意留一个位置放终止符*/
    ptr[n] = '\0';
    while (n--)
    {
        ptr[n] = ch;/*字符串填充*/
    }
    return ptr;
}