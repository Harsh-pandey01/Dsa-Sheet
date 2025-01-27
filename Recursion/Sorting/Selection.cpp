// We are given an array and we have to perform selection sort on that 
// using only recursion

#include<bits/stdc++.h>
using namespace std ;

void helper(vector<int>&nums , int start , int end){
    if(start == nums.size()-1) return ;

    if(end == nums.size()){
        helper(nums,start+1,start+2);
    }else{
        if(nums[end] < nums[start]){
            swap(nums[end],nums[start]);
        }

        helper(nums,start,end+1);
    }

}

void selection(vector<int>&nums){
    helper(nums,0,0);
}


int main(){

vector<int>nums = {4,5,7,8,5,2,4,4,6,6,7,8,9};

selection(nums);
for(auto i : nums) cout << i <<" ";

    return 0 ;
}











