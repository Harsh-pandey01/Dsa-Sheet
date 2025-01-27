// We are given an arry and we have to apply bs on array and return if target is present

#include<bits/stdc++.h>
using namespace std ;

bool bs(vector<int>&nums , int target , int start , int end){
    if(start > end) return false ; // base condition

    int mid = (start + end)/2 ;

    if(nums[mid] == target) return true ;

    // we have to define the range
    if(nums[start] <= mid){
        // first half is sorted
        if(target >= nums[start] && target < nums[mid]){
            return bs(nums,target,start , mid-1);
        }else{
            return bs(nums,target,mid+1 , end);
        }
    }

    if(target  > nums[mid] && target <= nums[end]){
        return bs(nums,target,mid+1 ,end);
    }

    return bs(nums,target,start,mid-1);
}



bool isPresent(vector<int>&nums , int target){
    return bs(nums,target,0,nums.size()-1);
}

int main(){

vector<int>nums ;
nums = {5,6,7,8,9,1,2,3,4};

int target ;
cout << "Enter the target: ";
cin >> target ;

if(isPresent(nums,target)){
    cout <<"Target is present";
}else{
    cout << "Target is not present";
}


    return 0 ;
}












