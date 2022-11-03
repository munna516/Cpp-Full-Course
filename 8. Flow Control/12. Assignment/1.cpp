/*
The program below prompts the user to input a value and checks whether the value is even or odd, and prints
    messages accordingly
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please type in an integral Value : ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;

    return 0;
}