#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Which day is today [1.Monday,...,7.Sunday] : ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Today is Monday, Lets have some fun" << endl;
        break;
    case 2:
        cout << "Today is Tuesday, Lets have some fun" << endl;
        break;
    case 3:
        cout << "Today is Wednesday, Lets have some fun" << endl;
        break;
    case 4:
        cout << "Today is Thursday, Lets have some fun" << endl;
        break;
    case 5:
        cout << "Today is Friday, Lets have some fun" << endl;
        break;
    case 6:
        cout << "Today is Saturday, Lets have some fun" << endl;
        break;
    case 7:
        cout << "Today is Sunday, Lets have some fun" << endl;
        break;

    default:
        cout << n << " is not a valid day" << endl;
        break;
    }

    return 0;
}