#include <iostream>
using namespace std;
int main()
{
    int increment{5};
    int number1{10};
    int number2{23};
    int number3{15};
    int number4{20};
    int result = (number1 *= increment, number2 = 40, number3 - (--increment), number4 += (++increment));
    cout << "Number 1 : " << number1 << endl; // 50
    cout << "Number 2 : " << number2 << endl; // 40
    cout << "Number 3 : " << number3 << endl; // 15
    cout << "Number 4 : " << number4 << endl; // 25
    cout << "Result : " << result << endl;    // 25

    return 0;
}