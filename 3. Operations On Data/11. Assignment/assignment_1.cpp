// Program to convert Celcius to Fahrenheit

#include <iostream>
using namespace std;
int main()
{
    double celsius, fahrenheit;
    cout << "Please enter a degree value in celsius : ";
    cin >> celsius;
    fahrenheit = ((9 * celsius) / 5) + 32;
    cout << celsius << " celsius is " << fahrenheit << " fahrenheit" << endl;

    return 0;
}