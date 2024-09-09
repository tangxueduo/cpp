#include<iostream>
using namespace std;
int main()
{
    /*静态转换，动态转换，常量转换，重新解释转换*/

    int i =0;
    float f = static_cast<float>(i);
    cout << "f value\t" << f << endl;
    // 常量转换
    const int j = 10;
    int& r = const_cast<int&>(j);
    cout << "r value\t" << r << endl;


    // 动态转换
    // class Base {};
    // class Derived : public Base {};
    // Base* ptr_base = new Derived;
    // Derived* ptr_derived = dynamic_cast<Derived*>(ptr_base); // 将基类指针转换为派生类指针

    // 重新解释转换:将一个数据类型的值重新解释为另一个数据类型的值，通常用于在不同的数据类型之间进行转换
    int k = 10;
    float ff = reinterpret_cast<float&>(k);
    cout << "ff value\t" << ff << endl;

}