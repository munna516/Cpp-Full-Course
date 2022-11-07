#include <iostream>
using namespace std;
int main()
{
    const char *message{"Hello World!"};
     cout << "message : " << message << endl;

    // *message = "B"   compiler error

    cout << "Value of message : " << *message << endl;

    // Allow users to modify the string
    char message1[]{"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
}