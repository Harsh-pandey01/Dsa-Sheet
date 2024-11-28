/*
Input: arr[] = [-2, 6, -3, -10, 0, 2]
Output: 180
Explanation: The subarray with maximum product is {6, -3, -10} with product = 6 * (-3) * (-10) = 180.
*/

#include<bits/stdc++.h>
using namespace std ;

int maxProduct(vector<int>&arr){

// Approach 1 :- Find All the possible subarrays and from them return the subarray 
// having the maximum product of all

// O(n*n) which is not that much optimised approach 

// How can we optimise this approach ?

// using the approach of prefix and suffix

int ans = 0 ;
int pref = 1 ;
int suff = 1 ;

for(int i = 0 ; i < arr.size() ; i++){
    if(pref == 0)  pref = 1 ;
    if(suff == 0) suff = 1 ;

    pref = pref * arr[i] ;
    suff = suff * arr[arr.size()-i-1];

    ans = max(ans , max(pref , suff));
}

return ans ;

}


int main(){

vector<int>arr = {-2, 6, -3, -10, 0, 2} ;

int ans = maxProduct(arr) ;

cout << "The Maximum product present will be " <<ans <<endl ;

    return 0 ;
}





















