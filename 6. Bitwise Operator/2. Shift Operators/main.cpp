#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    unsigned short int value{0xff0u};
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Value in (bin) : " << std::bitset<16>(value) << " , "
         << "Value in (dec) : " << dec << value << endl;
    // Shifting left by one bit
    value = static_cast<unsigned short int>(value << 1);
    cout << "Value in (bin) : " << std::bitset<16>(value) << " , "
         << "Value in (dec) : " << dec << value << endl;

    // Shifiting left by one bits

    value = static_cast<unsigned short int>(value << 1);
    cout << "Value in (bin) : " << std::bitset<16>(value) << " , "
         << "Value in (dec) : " << dec << value << endl;

    value = static_cast<unsigned short int>(value << 1);
    cout << "Value in (bin) : " << std::bitset<16>(value) << " , "
         << "Value in (dec) : " << dec << value << endl;

    value = static_cast<unsigned short int>(value << 1);
    cout << "Value in (bin) : " << std::bitset<16>(value) << " , "
         << "Value in (dec) : " << dec << value << endl;

    value = static_cast<unsigned short int>(value << 1);
    cout << "Value in (bin) : " << std::bitset<16>(value) << " , "
         << "Value in (dec) : " << dec << value << endl;

    // Shifiting rigt by one bits

    value = static_cast<unsigned short int>(value >> 1); // We can't get back the value 1
    cout << "Value in (bin) : " << std::bitset<16>(value) << " , "
         << "Value in (dec) : " << dec << value << endl;

    // Shifting multiple bits one go

    value = static_cast<unsigned short int>(value >> 4); // We can't get back the value 1
    cout << "Value in (bin) : " << std::bitset<16>(value) << " , "
         << "Value in (dec) : " << dec << value << endl;

    cout << "Value : " << (value << 1 )<< endl;

    return 0;
}