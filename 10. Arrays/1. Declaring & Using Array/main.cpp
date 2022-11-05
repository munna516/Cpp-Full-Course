#include <iostream>
using namespace std;
int main()
{

    // Declare an array of ints
    int scores[10];
    /*
        // Read Data
        cout << "Scores [0] : " << scores[0] << endl; // Junk Data
        cout << "Scores [1] : " << scores[1] << endl; // Junk Data
        */
    /*

    // Read with a loop
    for (size_t i{0}; i < 10; i++)
    {
       cout << "Scores [" << i << "] : " << scores[i] << endl;
    }
    */

    // Write data into an array
    /*
    scores[0] = 5;
    scores[1] = 10;
    scores[2] = 17;
    for (size_t i{0}; i < 10; i++)
    {
        cout << "Scores [" << i << "] : " << scores[i] << endl;
    }
    */

    // Write data using loop
    /*
    for (size_t i{0}; i < 10; i++)
    {
        scores[i] = i * 10;
    }
    // Print Out the data
    for (size_t i{0}; i < 10; i++)
    {
        cout << "Scores [" << i << "] : " << scores[i] << endl;
    }
    */

    /*
    // Declare & Initialization at a same time
    double salary[5]{12, 16.5, 19, 23.4, 29};
    for (size_t i{0}; i < 5; i++)
    {
        cout << "salary [" << i << "] : " << salary[i] << endl;
    }
    */

    /*
   // If we don't initialization all elements then the elements are all 0
   int pay[5]{12, 16, 19};
   for (size_t i{0}; i < 5; i++)
   {
       cout << "Pay [" << i << "] : " << pay[i] << endl;
   }
   */

    // Omit the size of array
    /*
    int salary[]{12, 16, 19, 23, 29, 12, 89, 56};
    for (auto value : salary)
    {
        cout << "value : " << value << endl;
    }
     */

    // sum elemnts
    int add[]{10, 12, 18, 19, 56, 34, 23};
    int sum = 0;
    for (auto adding : add)
    {
        sum += adding;
    }
    cout << "Sum : " << sum << endl;

    return 0;
}