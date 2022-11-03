#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Type in your X location : ";
    cin >> x;
    cout << "Type in your Y location : ";
    cin >> y;
    if ((x >= -10 && x <= 10) && (y <= -5 && y <= 5))
        cout << "You are completely surrounded. Don't move!" << endl;
    else
        cout << "You're out of reach!" << endl;

    return 0;
}