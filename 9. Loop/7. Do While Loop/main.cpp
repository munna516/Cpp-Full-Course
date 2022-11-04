#include <iostream>
using namespace std;
int main()
{
    const unsigned int count{10};
    size_t i{0};
    do
    {
        cout << i << " : I Love C++ " << i+1 << endl;
        ++i;
    } while (i < count);

    return 0;
}