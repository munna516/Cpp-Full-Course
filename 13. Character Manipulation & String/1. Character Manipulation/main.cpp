/* isalnum   isalpha  isblank  isupper  islowe   isdigit     */

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // Check the character is alphanumeric
 
    cout << "Std::isalnum" << endl;
    cout << "C is a alphanumeric : " << std::isalnum('C') << endl;
    cout << "^ is a alphanumeric : " << std::isalnum('^') << endl;
    cout << "8 is a alphanumeric : " << std::isalnum('8') << endl;

    // Can use this as a condition
    char input{'*'};
    if (isalnum(input))
        cout << input << " is a alphanumeric" << endl;
    else
        cout << input << " is not a alphanumeric" << endl;


    // Check if character is alphabetic

    cout << endl;
    cout << "std::isalpha" << endl;
    cout << "C is alphabetic : " << isalpha('C') << endl;
    cout << "^ is alphabetic : " << isalpha('^') << endl;
    cout << "7 is alphabetic : " << isalpha('7') << endl;

    if (std::isalpha('e'))
        cout << 'e' << " is alphabetic" << endl;
    else
        cout << 'e' << " is not alphabetic" << endl;


    // Check blank

    cout << endl;
    cout << "std::isblank : " << endl;
    char c[]{"Hello, I am Mehedi Hasan Munna. How are you"};
    cout << "message : " << c << endl;

    int blank_count{};
    for (size_t i{0}; i < strlen(c); i++)
    {
        if (isblank(c[i]))
        {
            cout << "Found a blank character at [" << i << "] index. " << endl;
            blank_count++;
        }
    }
    cout << "Total blank : " << blank_count << endl;


    // Cheach character is uppercase or lowercase

    cout << endl;
    int lower_count = 0;
    int upper_count = 0;
    cout << "std::islower & std::isupper : " << endl;
    char message[]{"C++ is The most Used Language in the World"};
    cout << "message : " << message << endl;
    for (auto character : message)
    {
        if (std::islower(character))
        {
            cout << character << " ";
            ++lower_count;
        }
        if (std::isupper(character))
        {
            cout << character << " ";
            ++upper_count;
        }
    }
    cout << endl;
    cout << "Lower case letter : " << lower_count << endl;
    cout << "Upper case letter : " << upper_count << endl;


    // Check the character is digit
    cout << endl;
    int digit = 0;

    cout << "std::isdigit : " << endl;
    char message1[]{"In 1970 to 2022 C++ is The most Used Language in the World"};
    cout << "message1 : " << message1 << endl;
    for (auto character1 : message1)
    {
        if (std::isdigit(character1))
        {
            cout << character1 << " ";
            digit++;
        }
    }
    cout << endl;
    cout << "Total digit : " << digit << endl;
   

    cout << endl;
    cout << "std::toupper & std::tolower : " << endl;
    char t[]{"My name is mehedi Hasan Munna & I love To Programming"};
    int x = strlen(t);
    char another[x];
    for (int i = 0; i < strlen(t); i++)
    {
        another[i] = std::toupper(t[i]);
    }
    cout << "Main : " << t << endl;
    cout << "Uppercase : " << another << endl;
    cout << endl;
    for (int i = 0; i < strlen(t); i++)
    {
        another[i] = std::tolower(t[i]);
    }
    cout << "Main : " << t << endl;
    cout << "Lowercase : " << another << endl;

    return 0;
}