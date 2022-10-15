// Precedence : Which Operation do first
// Associativity : Which direction or which order

#include <iostream>
using namespace std;
int main()
{
    int a{2};
    int b{3};
    int c{6};
    int d{5};
    int e{4};
    int f{7};
    int g{8};

    // Precedence
    int result = a + b * c - e / a - g + f;
    cout << "Result : " << result << endl;

    result = a * b / c - f + c - a - d - e + g + f;
    cout << "Result : " << result << endl;

    // Associativity
    result = a * b / (c - f) + c - (a - d) - e + (g + f);
    cout << "Result : " << result << endl;

    return 0;
}