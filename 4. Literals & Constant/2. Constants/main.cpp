#include<iostream>
using namespace std;
int main()
{
   /* A constant is a read  only variable & we do not assign vlaue to it */

    const int age {56};
    const float height {6.54f};

    //age = 55; // Can't modify
    //height = 1.8f;


    int years { 3 * age};

    cout << "age : " << age << endl;
    cout << "height : " << height << endl;
    cout << "years : " << years << endl;

    return 0;
}