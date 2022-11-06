//  Finding Common Elements

#include <iostream>
using namespace std;
int main()
{
    int a = 0, data3[10];
    int data1[]{1, 2, 4, 5, 9, 3, 6, 7, 44, 55};
    int data2[]{11, 2, 44, 45, 49, 43, 46, 47, 55, 88};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (data1[i] == data2[j])
            {
                data3[a] = data1[i];
                ++a;
            }
        }
    }
    cout << "There are " << a << " common elemnts. They are : ";
    for (int i = 0; i < a; i++)
    {
        cout << data3[i] << " ";
    }
}
