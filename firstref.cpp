/**
 * C++引用即为某个变量赋予一个新的名字。这个新引用和本体是同一个地址值，可以看做分身。
 */
#include "iostream"

using namespace std;

int main(int argc,char *argv[])
{
    int user = 1;
    int & tom = user;
    cout << "user= " << user << endl;
    cout << "tom= " << tom << endl;
    tom++;
    cout << "user= "<< user << endl;
    cout << "tom= "<< tom << endl;

    cout << "user address: " << &user << endl;
    cout << "tom address: " << &tom << endl;
    return 0;
}