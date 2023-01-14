#include <bits/stdc++.h>
using namespace std;
int main()
{
    int scores[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *p_scores{scores};

    cout << "Printing Address & Value : " << endl;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;
    cout << "Address : " << p_scores << "   Value : " << *(p_scores) << endl;
    ++p_scores;

    cout << endl;
    cout << "Explicit Addition of Integers : " << endl;
    p_scores = scores;
    cout << "Scores[4] : " << *(p_scores + 4) << endl;

    // Printing array usign loop
    cout << endl;
    cout << "Printing array using For loop : " << endl;
    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
    {
        cout << "Value : " << *(p_scores + i) << endl;
    }

    // We can also use the array name directly
    cout << endl;
    cout << "Printing array  using array name & For loop : " << endl;
    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
    {
        cout << "Value : " << *(scores + i) << endl;
    }

    // Printing element reverse order
    cout << endl;
    cout << "Printing Reverse order array : " << endl;
    for (int i = sizeof(scores) / sizeof(scores[0]) - 1; i >= 0; i--)
    {
        cout << "Value : " << *(scores + i) << endl;
    }

    // Another version to print reverse order
    cout << endl;
    cout << "Printing Reverse order array : " << endl;
    p_scores = scores + sizeof(scores) / sizeof(scores[0]) - 1;
    for (int i = sizeof(scores) / sizeof(scores[0]) - 1; i >= 0; i--)
    {
        cout << "Value : " << *(p_scores--) << endl;
    }

    // Another way to print array
    p_scores = scores;
    scores[0] = 31;
    *(scores + 1) = 32;   // same as scores [1]
    *(p_scores + 2) = 33; // same as scores [2]
    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
    {
        cout << "Value : " << *(p_scores + i) << endl;
    }

    return 0;
}