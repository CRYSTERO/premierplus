/**
 * 函数指针的使用案例。
 */
#include "iostream"

using namespace std;

double tom(int len);
double dave(int len);
/*
 * estimate函数传一个函数指针，指针的数据类型为函数的返回值类型，指针名加括号，最后是加括号表示
 * 要求函数的接受参数的类型。
 */
void estimate(int len, double (*ptr) (int));

int main(int argc,char *argv[])
{
    int len;
    cout << "How many lines you want to type?" << endl;
    cin >> len;
    cout << "Here is tom's estimate" << endl;
    estimate(len, tom);
    cout << "Here is dave's estimate" << endl;
    estimate(len, dave);

    return 0;
}

double tom(int len)
{
    return 0.05 * len;
}

double dave(int len)
{
    return 0.03 * len + 0.0004 + len * len;
}

void estimate(int len, double (*ptr) (int))
{
    //如果要调用指针指向函数，只要(指针名) (参数)即可
    cout << "It will take " << (*ptr) (len) << " hours to do." << endl;
}