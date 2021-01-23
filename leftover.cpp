#include "iostream"
using namespace std;
/**
 *  函数的重载
 *  没什么好说的
 */
unsigned long left(unsigned long num, unsigned count);
char* left(const char* str, int n = 1);

int main(int argc,char *argv[])
{
    const char* str = "Molloki";
    cout << left(str, 4) << endl;
    unsigned long num = 4001234567;
    cout << left(num, 7) <<endl;
    return 0;
}

unsigned long left(unsigned long num, unsigned count)
{
    int i = 1;
    while(i < count)
    {
        num /= 10;
        i++;
    }
    return num;
}
char* left(const char* str, int n)
{
    char* ch = new char [n + 1];
    int i = 0;
    for(; i < min(n, (int)strlen(str)); i++)
    {
        ch[i] = str[i];
    }
    return ch;
}