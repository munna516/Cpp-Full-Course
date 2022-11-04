#include <iostream>
using namespace std;
int main()
{
    int bag_of_value[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Ranged Bases For loop
    for (int value : bag_of_value)
    {
        cout << "Value : " << value << endl;
    }
    cout << endl;
    // Specify the collection in place
    for (int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        cout << "Value : " << value << endl;
    }
    cout << endl;
    // Auto type deduction
    for (auto value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        cout << "Value : " << value << endl;
    }
    return 0;
}