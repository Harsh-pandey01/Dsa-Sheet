// we are given an array  and we have to reverse the given array

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{

    int i = 0, e = size - 1;

    while (i < e)
    {
        swap(arr[i++], arr[e--]);
    }
}

int main()
{

    int array[5] = {1, 2, 3, 4, 5};

    reverseArray(array, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}