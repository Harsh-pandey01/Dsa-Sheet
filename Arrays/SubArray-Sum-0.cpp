// We are given an array and we have to find the subarray having sum equal to 0
// 4, 2, -3, 1, 6 :-  Hence subarray has a sum equal to 0

#include <bits/stdc++.h>
using namespace std;

bool isSubarray0(vector<int> &arr)
{
    // Bruteforce Approach :-
    // Find all subarrays and find if the subarray having sum equal to zero is present 
    // or not , if present then return true otherwise return false

    for(int i = 0 ; i< arr.size() ; i++){
        int sum = 0 ;
        for(int j = i ; j < arr.size() ; j++){
            sum+=arr[j] ;
            if(sum == 0) return true ;
        }
    }
return false ;


// Optimised Approach will be using the prefix sum 


}

int main()
{

    // vector<int> arr = {4, 2, -3, 1, 6};
     vector<int>arr = {1, 2, -1};
    bool present = isSubarray0(arr);
    if(present) cout << "Subarray is present"<<endl ;
    else cout <<"Subarray is not present" << endl ;

    return 0;
}
