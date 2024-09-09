#include<iostream>
#include<limits>

// enum color {red, green, blue} c; c = blue;

using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    cout << "type\t\t" << "*******size*******"<< endl;
    cout << "bool\t\t"  << "num of bytes" << sizeof(bool) << endl;
    cout << "int\t\t"  << "num of bytes" << sizeof(int) << endl;
    cout << "char\t\t"  << "num of bytes" << sizeof(char) << endl;
    cout << "float\t\t"  << "num of bytes" << sizeof(float) << endl;

    return 0;
}
