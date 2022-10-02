#include <iostream>
using namespace std;
int main()
{
    // Compile time error (without ; after endl)
    cout << "Hello Bangladesh!!!" << endl;

    //Run time error 10/0
    int value = 10 /0;
    cout << "Value : " << value << endl;
    return 0;
}