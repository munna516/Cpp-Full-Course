#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    unsigned short int num{13};

    cout << "Number in (dec) : " << std::showbase << std::dec << num << endl;
    cout << "Number in (oct) : " << std::showbase << std::oct << num << endl;
    cout << "Number in (hex) : " << std::showbase << std::hex << num << endl;

    // Printing integers in Binary

    cout << "Number in (bin) : " << std::bitset<8>(num) << endl;

    return 0;
}