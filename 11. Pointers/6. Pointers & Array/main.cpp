#include <bits/stdc++.h>
using namespace std;
int main()
{
    int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *p_score{scores};
    cout << "scores : " << scores << endl;
    cout << "p_scores : " << p_score << endl;
    cout << "&score[0] : " << &scores[0] << endl;

    // printing content of array

    cout << "*scores : " << *scores << endl;
    cout << "*p_score : " << *p_score << endl;
    cout << "p_score[0] : " << p_score[0] << endl;
    cout << "score[0] : " << scores[0] << endl;

    // Difference
    int number{21};
    p_score = &number;
    // scores = &number    // compiler error
    cout << "p_score : " << p_score << endl;
    cout << "*p_score : " << *p_score << endl;
    cout << "*score : " << *scores << endl;

    return 0;
}