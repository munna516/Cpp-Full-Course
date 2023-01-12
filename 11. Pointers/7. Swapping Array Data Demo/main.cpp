#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr0[]{1, 2, 3, 4, 5};
    int arr1[]{6, 7, 8, 9, 10};
    int x = sizeof(arr0) / sizeof(arr0[0]);
    cout << "Array 0 : ";
    for (int i = 0; i < x; i++)
    {
        cout << arr0[i] << " ";
    }
    cout << endl;
    cout << "Array 1 : ";
    for (int i = 0; i < x; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    int *p_arr0 = arr0;
    int *p_arr1 = arr1;
    int *temp{nullptr};

    temp = p_arr0;
    p_arr0 = p_arr1;
    p_arr1 = temp;

    cout << "After Swapping Array 0 : ";
    for (int i = 0; i < x; i++)
    {
        cout << p_arr0[i] << " ";
    }
    cout << endl;
    cout << "After Swapping Array 1 : ";
    for (int i = 0; i < x; i++)
    {
        cout << p_arr1[i] << " ";
    }

    return 0;
}