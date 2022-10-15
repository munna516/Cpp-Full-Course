#include <iostream>
using namespace std;
int main()
{
    int number1{2};
    int number2{9};

    // Addition
    int result = number1 + number2;
    cout << "Result : " << result << endl;

    // Subtruction
    result = number2 - number1;
    cout << "Result : " << result << endl;
    result = number1 - number2;
    cout << "Result : " << result << endl;

    // Multiplication
    result = number1 * number2;
    cout << "Result : " << result << endl;

    // Division
    result = number2 / number1;
    cout << "Result : " << result << endl;

    // Modulus
    result = number2 % number1;
    cout << "Result : " << result << endl;

    result = 33 % 10;
    cout << "Result : " << result << endl;

    return 0;
}