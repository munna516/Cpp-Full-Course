/* strlen  strcmp strncmp strchr */

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // Std::strlen  to find the length of a string

    char message[]{"Birds fly in the sky"};
    const char *message1{"Birds fly in the sky"};

    cout << "length of message : " << strlen(message) << endl;
    cout << "size of message : " << sizeof(message) << endl; // include null
    cout << "length of message1 : " << strlen(message1) << endl;
    cout << "size of message1 : " << sizeof(message1) << endl; // size of pointer

    // std::strcmp to compare two string

    const char *string1{"Aello"};
    const char *string2{"Cello"};
    cout << std::strcmp(string1, string2) << endl;

    char string3[]{"Jamaica"};
    char string4[]{"Jamaica"};
    cout << std::strcmp(string3, string4) << endl;

    string1 = "Kello";
    string2 = "Melloooo";
    cout << std::strcmp(string1, string2) << endl;

    // std::strncmp to compare 0 to nth characters

    const char *string5{"Madafaka"};
    const char *string6{"Madafoka"};
    int n = 5;
    cout << std::strncmp(string5, string6, n) << endl;

    string5 = "aaaaeic";
    string6 = "aaaaaeic";
    cout << std::strncmp(string5, string6, 4) << endl;

    // Find the first occurrence of a character
    // CODE STOLEN FROM THE DOCS :

    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;

    // doc : https://en.cppreference.com/w/cpp/string/byte/strchr

    // we use std::strchr to find all the characters one by one.

    const char *const str{"Try not. Do, or do not. There is no try."};
    // Can make this a const pointer to prevent users from making it point somewhere else
    char target = 'T';
    const char *result = str;
    size_t iterations{};

    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target
                  << "' starting at '" << result << "'\n";

        // Increment result, otherwise we'll find target at the same location
        ++result;
        ++iterations;
    }
    std::cout << "iterations : " << iterations << std::endl;

    // A lesser version that will loop 25 times

    // Find the first occurrence of a character
    // CODE STOLEN FROM THE DOCS :
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;
    // doc : https://en.cppreference.com/w/cpp/string/byte/strchr

    // we use std::strchr to find all the characters one by one.

    const char *str1{"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char *result{nullptr};
    size_t iterations{};

    while ((result = std::strchr(str, target)) != nullptr)
    {
        std::cout << "Found '" << target
                  << "' starting at '" << result << "'\n";

        // Increment result, otherwise we'll find target at the same location
        ++str1; // Making the pointer point to the next character
        ++iterations;
    }
    std::cout << "iterations : " << iterations << std::endl;

    // Find last occurence
    // CODE STOLEN FROM THE DOCS :
    std::cout << std::endl;
    std::cout << "std::strrchr : " << std::endl;
    
    // doc : https://en.cppreference.com/w/cpp/string/byte/strrchr

    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');
    if (output)
        std::cout << output + 1 << std::endl; //+1 because we want to start printing past
                                              // the character found by std::strrchr.

    return 0;
}