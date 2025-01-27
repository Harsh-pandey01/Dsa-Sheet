// We are given an numsay and we have to perform the merge sort on the numsay

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int start, int end, int mid)
{

    int size1 = mid - start + 1;
    int size2 = end - mid;

    vector<int> left(size1);
    vector<int> right(size2);




    for (int i = 0; i < size1; i++)
        left[i] = nums[start + i];
    for (int i = 0; i < size2; i++)
        right[i] = nums[mid + 1 + i];

    int i = 0, j = 0, k = start;

    while (i < size1 && j < size2)
    {
        if (left[i] <= right[j])
        {
            nums[k] = left[i];
            i++;
        }
        else
        {
            nums[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < size1)
    {
        nums[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < size2)
    {
        nums[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &nums, int start, int end)
{

    // base case
    if (start == end)
    {
        return;
    }

    // find mid and ask to sort left and right

    int mid = start + (end - start) / 2;
    // sort the left part
    mergeSort(nums, start, mid);
    // sort the right part
    mergeSort(nums, mid + 1, end);

    // merge both the parts together

    merge(nums, start, end, mid);
}
void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{

    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    mergeSort(nums, 0, nums.size() - 1);
    cout << "Sorted array: ";
    printArray(nums);
    return 0;
}
