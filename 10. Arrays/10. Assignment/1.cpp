// find the uniquq elements of an ary

#include <iostream>
using namespace std;
int main()
{
    int size = 16, a = 0;
    int ary2[size];
    int ary[]{1, 9, 8, 2, 5, 2, 10, 14, 15, 16, 23, 14, 8, 17, 22, 27};

    for (size_t i{0}; i < size; i++)
    {
        int count = 0;
        for (size_t j{0}; j < size; j++)
        {
            if (i == j)
                continue;
            if (ary[i] == ary[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {

            ary2[a] = ary[i];
            ++a;
        }
    }
    cout << "There are " << a << " unique elements." << endl;

    for (size_t i{0}; i < a; i++)
    {
        cout << ary2[i] << " ";
    }
    return 0;
}