// We are given an array and we have to find the maximum sum having a subarray

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &array)
{

    //     // Bruteforce approach :- find all the subarrays and get the maximum subarray sum
    //   int ans = INT_MIN ;
    //     for(int i = 0 ; i < array.size() ; i++){
    //         int sum = 0 ;
    //         for(int j = i ; j < array.size() ; j++){
    //             sum+=array[j] ;
    //             ans = max(ans,sum);
    //         }
    //     }
    //     return ans ;

    /* -------------------- Kadans Algorithm -----------------*/
    int sum = 0;
    int ans = array[0];

    for (int i = 0; i < array.size(); i++)
    {
        sum += array[i];
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }

    return ans;
}

int main()
{

    vector<int> array = {2, 3, -8, 7, -1, 2, 3};

    cout << maxSubarraySum(array);
    return 0;
}
