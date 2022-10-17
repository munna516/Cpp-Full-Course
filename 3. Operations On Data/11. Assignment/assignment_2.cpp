// Calculate area & volume of a box

#include <iostream>
using namespace std;
int main()
{
    double length, height, width, base_area, volume;
    cout << "Welcome to box calculator. Please type in length, width & height information : "<<endl;
    cout << "length : ";
    cin >> length;
    cout << "Width : ";
    cin >> width;
    cout << "Height : ";
    cin >> height;
    base_area = width * length;
    cout << "Base area is : " << base_area << endl;
    cout << "Volume is : " << base_area * height << endl;

    return 0;
}