#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    // printing random number
    int random_number = std::rand();
    /*
    cout << "random_number : " << random_number << endl;

    random_number = std::rand();
    cout << "random_number : " << random_number << endl;

    // Generate random number in a loop
    random_number = std::rand();
    for (size_t i{0}; i < 20; i++)
    {
        random_number = std::rand();
        cout << "random_number [" << i << "] : " << random_number << endl;
    }
    */

    // Generate random number in a loop between [0~10]
    /*
    random_number = std::rand();
    for (size_t i{0}; i < 20; i++)
    {
        random_number = std::rand()%11 ;
        cout << "random_number [" << i << "] : " << random_number << endl;
    }
    */
    // Generate random number in a loop between [1~10]
    /*
    random_number = std::rand();
    for (size_t i{0}; i < 20; i++)
    {
        random_number = std::rand()%11 +1 ;
        cout << "random_number [" << i << "] : " << random_number << endl;
    }
    */
    // generate unique random numbers
    std::srand(std::time(0));
    random_number = std::rand();
    for (size_t i{0}; i < 20; i++)
    {
        random_number = std::rand();
        cout << "random_number [" << i << "] : " << random_number << endl;
    }
    return 0;
}
