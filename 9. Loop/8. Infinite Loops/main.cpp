#include <iostream>
using namespace std;
int main()
{
    size_t i{0};
    // infinite for loop
    for (size_t i{0};; ++i)
    {
        cout << i << endl;
    }

    // infinite while loop
    while (true)
    {
        cout << i << endl;
    }

    // Infinite do while loop
    do
    {
        cout << i << endl;
        ++i;
    } while (true);
    return 0;
}