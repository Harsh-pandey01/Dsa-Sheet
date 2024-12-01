/*
Given a number x and an array of integers arr, find the smallest subarray with sum greater than the given value. If such a subarray do not exist return 0 in that case.

Examples:

Input: x = 51, arr[] = [1, 4, 45, 6, 0, 19]
Output: 3
Explanation: Minimum length subarray is [4, 45, 6]
*/

#include<bits/stdc++.h>
using namespace std ;

int smallestSubarray(vector<int>&arr , int number){

    // Bruteforce Approach :- Find all the possible subarrays possible and check for the smallest
    // Subarray having sum greater than the sum

    // Optimised Appraoch :- Using 2 pointers
        int ans = INT_MAX ;
        int i = 0 ;
        int j = 0 ;
        int sum = 0 ;
        bool found = false ;
        while(j < arr.size()){
            sum+=arr[j];
            if(sum <= number){
                j++ ;
            }else{
                ans = min(ans,j-i+1);
                sum-=arr[i];
                found = true ;
                sum-=arr[j];
                i++ ;
            }
        }
        if(found){
           return ans ; 
        }
        return 0 ;
        
    
}


int main(){

vector<int>arr= {1, 4, 45, 6, 0, 19} ;
int sum ;
cin >> sum ;
int smallestSize = smallestSubarray(arr,sum);


cout << "Smallest Subarray with sum greater is "<<smallestSize <<endl;


    return 0 ;
}















