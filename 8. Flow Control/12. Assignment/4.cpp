#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Which day is today [1.Monday,...,7.Sunday] : ";
    cin >> n;
    if (n > 7)
        cout << n << " is not a valid day. Bye!!!" << endl;

    else
    {
        cout << "How many days have passed up to today : ";
        cin >> x;
        int y = x % 7;
        int z = abs(n - y);
        switch (n)
        {
        case 1:
            cout << "Today is Monday" << endl;
            break;
        case 2:
            cout << "Today is Tuesday" << endl;
            break;
        case 3:
            cout << "Today is Wednesday" << endl;
            break;
        case 4:
            cout << "Today is Thursday" << endl;
            break;
        case 5:
            cout << "Today is Friday" << endl;
            break;
        case 6:
            cout << "Today is Saturday" << endl;
            break;
        case 7:
            cout << "Today is Sunday" << endl;
            break;
        }
    if (z == 0)
        cout << "If you went " << x << "days in the past you will hit Sunday" << endl;
    if (z == 1)
        cout << "If you went " << x << "days in the past you will hit Monday" << endl;
    if (z == 2)
        cout << "If you went " << x << "days in the past you will hit Tuesday" << endl;
    if (z == 3)
        cout << "If you went " << x << "days in the past you will hit Wednesday" << endl;
    if (z == 4)
        cout << "If you went " << x << "days in the past you will hit Thursday" << endl;
    if (z == 5)
        cout << "If you went " << x << "days in the past you will hit Friday" << endl;
    if (z == 6)
        cout << "If you went " << x << "days in the past you will hit Saturday" << endl;
    }

    return 0;
}