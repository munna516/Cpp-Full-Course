#include <iostream>
using namespace std;
int main()
{
    
    int num1{55};
    int num2{60};
    bool result = (num1 < num2);
    // If statement
    /*
     cout << std::boolalpha << "Result : " << result << endl;

     cout << endl;
     if (result == true)
         cout << num1 << " is less than " << num2 << endl;
     if (!(result == true))
         cout << num1 << " is not less than " << num2 << endl;
    */

    // else
    /*
     cout<<endl;
    cout<<"Using Else : "<<endl;
    if(result==true)
        cout << num1 << " is less than " << num2 << endl;
    else
       cout << num1 << " is not less than " << num2 << endl;
    */

    // using Expression as a condition

    /*
     cout<<endl;
    cout<<"Using Expression As a condition : "<<endl;
    if(num1<num2)
       cout << num1 << " is less than " << num2 << endl;
    else
       cout << num1 << " is not less than " << num2 << endl;

    */

    // Nesting if statements
    std::cout << std::endl;
    std::cout << "Nesting if statements" << std::endl;

    bool red = false;
    bool green{true};
    bool yellow{false};
    bool police_stop{true};

    /*
     *      If green : go
     *      If red, yellow : stop
     *      If green and police_stop : stop
     * */
    /*
    if(red){
        cout << "Stop" << endl;
    }
    if(yellow){
        std::cout << "Slow down" << endl;
    }
    if(green){
        cout << "Go" << endl;
    }
    */

    /*
    cout << endl;
     cout << "Police officer stops(verbose)" << endl;
     if(green){
         if(police_stop){
             cout << "Stop" << endl;
         }
         else{
             cout << "Go" << endl;
         }

     }
     */

    cout << endl;
    cout << "Police officer stops(less verbose)" << endl;
    if (green && !police_stop)
    {
        cout << "Go" << endl;
    }
    else
    {
        cout << "Stop" << endl;
    }

    return 0;
}