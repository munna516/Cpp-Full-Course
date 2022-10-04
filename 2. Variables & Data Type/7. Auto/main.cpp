#include <iostream>
using namespace std;
int main()
{
    auto var1{23};   // int 
    auto var2{23.5}; // double 
    auto var3{23.97f};  // float
    auto var4{23.95l};  // long double 
    auto var5{23u};  // unsigned 
    auto var6{23ul};  // unsigned long 
    auto var7{2334ll}; // long long 
    auto var8{'g'};   // char 

    cout << "Variable 1 : " << sizeof(var1) << " Bytes" << endl;
    cout << "Variable 2 : " << sizeof(var2) << " Bytes" << endl;
    cout << "Variable 3 : " << sizeof(var3) << " Bytes" << endl;
    cout << "Variable 4 : " << sizeof(var4) << " Bytes" << endl;
    cout << "Variable 5 : " << sizeof(var5) << " Bytes" << endl;
    cout << "Variable 6 : " << sizeof(var6) << " Bytes" << endl;
    cout << "Variable 7 : " << sizeof(var7) << " Bytes" << endl;
    cout << "Variable 8 : " << sizeof(var8) << " Bytes" << endl;

    return 0;
}