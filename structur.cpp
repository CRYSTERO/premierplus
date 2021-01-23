/**
 * C++结构体
 */
#include "iostream"

using namespace std;

//定义结构体
struct Car
{
    string brand;
    float price;
};

int main(int argc,char *argv[])
{
    //C初始化结构体
    struct Car firstCar =
            {
                "QUERY",
                35000
            };
    //C++初始化结构体，注意，无需加上struct关键字！和类声明差不多
    Car secCar=
            {
                "Audi",
                350000
            };
    cout << firstCar.brand << firstCar.price << endl;
    cout << secCar.brand << secCar.price << endl;
    return 0;
}