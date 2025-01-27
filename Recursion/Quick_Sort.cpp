// We are given an array and we want to sort the array using quixk sort we can do that

#include <bits/stdc++.h>
using namespace std;

int patition(vector<int> &nums, int low, int high)
{
    int pivot = nums[low];

    int start = low;
    int end = high;

      while (start < end) {
        // Move the start pointer to the right while nums[start] <= pivot
        while (nums[start] <= pivot) start++;
        
        // Move the end pointer to the left while nums[end] > pivot
        while (nums[end] > pivot) end--;
        
        // If start is smaller and end is larger, swap them
        if (start < end) {
            swap(nums[start], nums[end]);
        }
    }

    swap(nums[low], nums[end]);
    return end;
}

void quickSort(vector<int> &nums, int low, int high)
{

    if (low >= high)
        return; // base case

    // we want to have the partition index

    int partitionIndex = patition(nums, low, high);

    // we use recursion to solve the left and right part of the partition

    quickSort(nums, low, partitionIndex - 1);
    quickSort(nums, partitionIndex + 1, high);
}

int main()
{

    vector<int> nums = {4, 7, 8, 6, 1, 3, 2};
    // lets perform the quick sort here

    quickSort(nums, 0, nums.size() - 1);

    for (auto i : nums)
        cout << i << " ";

    return 0;
}
