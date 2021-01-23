/**
 * 可以创建一个结构体数组
 */
#include "iostream"

using namespace std;

struct Car
{
    string name;
    float price;
};

int main(int argc,char *argv[])
{
    Car cars[2] =
            {
                    {"Audi", 2000000},
                    {"Ferrari", 3500000}
            };
    //遍历输出结构体数组中每个结构元素的信息
    for(const Car& car : cars)
        cout << car.price << " " << car.name << endl;

    return 0;
}