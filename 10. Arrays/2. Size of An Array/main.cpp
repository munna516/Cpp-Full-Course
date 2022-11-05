#include <iostream>
using namespace std;
int main()
{
    int score[]{1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 28, 29, 78, 35, 6};

    /*
    int count{std::size(score)}; // after c++ 17
    for (size_t i{0}; i < size; i++)
    {
        cout << score[i] << " ";
    }
    */

    // B=efore c++17
    /*
    cout<<sizeof(score)<<endl;
    cout<<sizeof(score[0])<<endl;

    size_t count = (sizeof(score)/sizeof(score[0]));
    for (size_t i{0}; i < count; i++)
    {
        cout << score[i] << " ";
    }
    */

    for (int find : score)
    {
        cout << find << " ";
    }
    return 0;
}
