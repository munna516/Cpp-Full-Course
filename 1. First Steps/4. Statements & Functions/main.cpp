#include <iostream>
using namespace std;
int add_number(int first_num, int second_num)
{
    int result = first_num + second_num;
}
int main()
{
    int first_number{12};  // Statement
    int second_number{10}; // Statement

    cout << "First number : " << first_number << endl;  // 12
    cout << "Second number :" << second_number << endl; // 10

    int sum = first_number + second_number;
    cout << "Sum : " << sum << endl; // 22
    sum = add_number(30, 50);
    cout << "Sum : " << sum << endl;                // 80
    cout << "Sum : " << add_number(10, 14) << endl; // 24
    return 0;
}