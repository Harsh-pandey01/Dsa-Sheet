// We are given an array and we have to bubble sort the entire array using recursion

#include<bits/stdc++.h>
using namespace std ;

void helper(vector<int>&nums , int round , int col){
    if(round == nums.size()) return;

    if(col == nums.size()-round){
        helper(nums,round+1,0);
    }else{
        if(nums[col] > nums[col+1]){
            swap(nums[col],nums[col+1]);
        }

        helper(nums,round,col+1);
    }


}

void bubble(vector<int>& nums){
    helper(nums,1,0); 
}

int main(){

vector<int>nums = {4,5,7,8,1,5,6,7};

bubble(nums);
for(auto i : nums) cout << i <<" ";
    return 0 ;
}











