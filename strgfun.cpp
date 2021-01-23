/**
 * 传统C式的字符串定义不推荐在C++中使用。
 * 传统C字符串定义为
 *      char *[字符串名称] = "";
 * 这个字符串实际上就是一个char类型构成的数组。
 */
#include "iostream"
using namespace std;
//函数用于统计字符串中某个字符的出现次数
unsigned int count_chars(const char* str, char ch);
int main(int argc,char *argv[])
{
    char *string1 = "AAABBB";
    char *string2 = "CCCDDDD";
    cout << "count for string1: " << count_chars(string1, 'A') << endl;
    cout << "count for string2: " << count_chars(string2, 'D') << endl;
    return 0;
}

unsigned int count_chars(const char* str, char ch)
{
    unsigned int count = 0;

    //这个字符串实际上就是一个char类型构成的数组。*str指向着数组中每一个元素的地址。
    //如果*str指向的元素是'\0'那么结束循环。
    while (*str)
    {
        if(*str == ch)
        {
            count++;
        }
        str++;/*指针指向下一个元素*/
    }
    return count;
}