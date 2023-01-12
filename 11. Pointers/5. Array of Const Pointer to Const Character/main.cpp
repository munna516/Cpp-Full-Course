#include <bits/stdc++.h>
using namespace std;
int main()
{
    const char *student[]{
        "I like You",
        "Its ok",
        "Just Do that",
        "Welcome",
        "You Have to do that"};

    cout << "Printing out the Students : " << endl;
    for (const char *students : student)
    {
        cout << students << endl;
    }
    // *students[0]='k'   // compilation error

    const char *new_student{"I'm Very Happy"};
    student[2] = new_student;
    cout << endl;
    cout << "Printing out the Modified Students : " << endl;
    for (const char *students : student)
    {
        cout << students << endl;
    }

    return 0;
}