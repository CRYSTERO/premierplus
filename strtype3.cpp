/**
 * string类的成员函数与传统C语言字符串处理函数。
 * 注意！用strcat()函数所追加字符串的长度不能太长！否则可能会覆盖相邻内存空间导致程序意外停止！
 * 更安全的替代方法是使用strncat()函数，这将给一个参数n，只会复制n字节的数据。如果多了后面的就不复制。
 */
#include "iostream"
#include "string"
#include "cstring"

using namespace std;

int main(int argc,char *argv[])
{
    string str1;
    string str2 = "Hello World!";
    char chStr1[20];
    char chStr2[20] = "Hello C++!";

    //字符串的复制
    str1 = str2;
    strcpy(chStr1, chStr2);

    //字符串追加
    str1 += " I am from the future.";
    strcat(chStr1, " I am your father.");
    //strcat(chStr1, " I am your father you such a dumbass understand idiot?");这句就不行

    //获得字符串长度
    int len1 = str1.size();
    int len2 = strlen(chStr1);

    cout << "The string \" " << str1 << " \" contains " << len1 << " characters." << endl;
    cout << "The string \" " << str2 << " \" contains " << len2 << " characters." << endl;
    return 0;
}