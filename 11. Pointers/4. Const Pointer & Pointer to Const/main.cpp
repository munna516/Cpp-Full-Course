/*
int p{&x}  // Modifiable vale & address both
const int* p{&x}  // Only Address is Modifiable but not pointed value modifiable
const int* const p{&x}   // Both value & address is Constant
int* const p{&x}  // Only Value is modifiable but addresss is not modifiable

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // A raw veriable can be modified
    cout << "1.Raw any can be modified :" << endl;
    int num_1 = 15;
    cout << "Number 1 : " << num_1 << endl;
    cout << "Address of Number 1 : " << &num_1 << endl;
    num_1 = 45;
    num_1 += 10;
    cout << "Modified Number 1 : " << num_1 << endl;
    cout << "Address of Modified Number 1 : " << &num_1 << endl;
    cout << endl;

    // Non const pointer to non const data (modified both pointer  and pointed value)
    cout << endl;
    cout << "2. Both Pointer & pointed value is Modifiable : " << endl;
    int *p_num2{nullptr};
    int num_2{100};
    p_num2 = &num_2;

    cout << "p_num2 : " << p_num2 << endl;
    cout << "*p_num2 : " << *p_num2 << endl;
    cout << "num_2 : " << num_2 << endl;

    cout << endl;
    cout << "Modifing the value that pointed to : " << endl;
    *p_num2 = 134; // modifing pointed value
    cout << "p_num2 : " << p_num2 << endl;
    cout << "*p_num2 : " << *p_num2 << endl;
    cout << "num_2 : " << num_2 << endl;

    int x{16};
    p_num2 = &x; // modifing address
    cout << endl;
    cout << "Modifing the pointer : " << endl;
    cout << "p_num2 : " << p_num2 << endl;
    cout << "*p_num2 : " << *p_num2 << endl;
    cout << "num_2 : " << num_2 << endl;
    cout << endl;

    // Pointer to const (Only pointer is modifiable ,but the pointed value is const)
    cout << endl;
    cout << "3. Pointer is modifiable but value is Constant : " << endl;

    int num_3{56};
    const int *p_num3; // pointer to const
    p_num3 = &num_3;

    cout << "p_num3 : " << p_num3 << endl;
    cout << "*p_num3 : " << *p_num3 << endl;
    cout << "num_3 : " << num_3 << endl;

    // *p_num3 = 60;       // conpilation error
    // But we can change the pointer

    int y{367};
    p_num3 = &y;
    cout << endl;
    cout << "Modifiable Pointer : " << endl;
    cout << "p_num3 : " << p_num3 << endl;
    cout << "*p_num3 : " << *p_num3 << endl;
    cout << "num_3 : " << num_3 << endl;

    // const keyword applies to the variable name.

    std::cout << "const keyword applies to a variable name : " << std::endl;

    int protected_var{10}; // Can make it const to protect it if we want.Show this

    // p_protected_var is a pointer to const data, we can't
    // modify the data through this pointer : regardless of
    // whether the data itself is declared const or not.
    const int *p_protected_var{&protected_var};

    //*p_protected_var = 55;
    protected_var = 66;
    std::cout << "protected_var : " << protected_var << std::endl;
    std::cout << "p_protected_var : " << p_protected_var << std::endl;
    std::cout << "*p_protected_var : " << *p_protected_var << std::endl;
    std::cout << std::endl;

    // You can't set up a modifiable pointer to const data though,
    // You'll get a compiler error :Invalid convertion from 'const type*' to 'type*'.
    const int some_data{55};
    // int * p_some_data {&some_data}; // Compiler error.
    //*p_some_data = 66;
    cout << endl;

    // Const Pointer to Const Data
    cout << endl;
    cout << "4. Both Pointer & Pointed Value is Constant : " << endl;

    int num_4{35};
    const int *const p_num4{&num_4};
    cout << "p_num4 : " << p_num4 << endl;
    cout << "*p_num4 : " << *p_num4 << endl;
    cout << "num_4 : " << num_4 << endl;

    // Modifing Value
    // *p_num4 = 106;    // compilation error

    // Modifing Address

    int a{106};
    // p_num4=&a;   // Compilation error

    // This const pointer to const data is read only this also is const.
    cout << endl;

    // Const Pointer to Non const Data
    cout << endl;
    cout << "5.Pointer is Constant but Pointed Value is Modifiable : " << endl;

    int num_5{87};
    int *const p_num5{&num_5};
    cout << "p_num5 : " << p_num5 << endl;
    cout << "*p_num5 : " << *p_num5 << endl;
    cout << "num_5 : " << num_5 << endl;

    // Modifing Value
    *p_num5 = 120;
    cout << endl;
    cout << "Modified Value : " << endl;
    cout << "p_num5 : " << p_num5 << endl;
    cout << "*p_num5 : " << *p_num5 << endl;
    cout << "num_5 : " << num_5 << endl;

    // Modifing Address

    int q{45};
    // p_num5=&q;  // compilation error
    // This can not modify address

    return 0;
}