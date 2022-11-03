/*
There's a medical treatment that only applies to people whose age is greater
    than 20 and less than 40.
    The program prompts the user for age input. The program then checks whether
    the age is within the range [21,39]. We then print out messages saying whether
    the user is eligible for a medical treatment.
    */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please type in your age : ";
    cin >> n;
    if (n>39)
        cout << "Sorry,You are too old for this Treatment." << endl;
    else if (n >= 21)
    {
        if (n <= 39)
            printf("You are eligible for the treatment");
    }
    else if (n < 21)
        cout << "Sorry,You are too young for this Treatment." << endl;
    
    return 0;
}