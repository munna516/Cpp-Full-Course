#include <iostream>
using namespace std;
int main()
{
    const size_t count{10};
    size_t i{0};
    while (i < count)
    {
        cout << i+1 << " Love C++" << endl;
        ++i;
    }
    cout << "Loop is Done!!" << endl;
    return 0;
}