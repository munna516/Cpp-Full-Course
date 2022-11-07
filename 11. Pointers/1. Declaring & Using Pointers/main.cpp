#include <iostream>
using namespace std;
int main()
{
    // Declaring & Initializing pointers
    int *p_int{};
    double *p_fraction{};

    // Explicitly Initialize with null pointer
    int *p_int1{nullptr};
    int *p_fraction1{nullptr};

    // Pointers of different vaeiable but same type
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of pointer to int : " << sizeof(int *) << endl;
    cout << "Size of pointer to double  : " << sizeof(double *) << endl;
    cout << "Size of variable p_int : " << sizeof(p_int) << endl;
    cout << "Size of p_fraction : " << sizeof(p_fraction) << endl;

    // It dosen't matter you put * colse to data type or variable
    int* p_1{};
    int * p_2{};
    int  *p_3{};

    int *p_number5{}, other_int_var{};
    int *p_number6{}, other_int_var6{}; // Confusing as you wonder if other_int_var6
                                        // is also a pointer to int. It is not
                                        // The structure is exactly the same for the
                                        // previous statement

    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

    // It is better to separate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; // No room for confusion this time

     //Initializing pointers and assigning them data
    //We know that pointers store addresses of variables
    int int_var {43};
    int *p_int{&int_var};// The address of operator (&);
    
    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    //You can also change the address stored in a pointer any time
    int int_var1 {65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;


    //Can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};

    //p_int = &double_var; // Compiler error


    //Dereferencing a pointer : 
    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer

    return 0;
}