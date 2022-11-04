#include <iostream>
using namespace std;
int main()
{
    /*When we remove cout it take too short time & when we use cout
    it take too long time */
    for (size_t i{0}; i < 10000; i++)
    {
        // cout << "i : " << i << endl;
    }
    cout << "Done" << endl;
    return 0;
}