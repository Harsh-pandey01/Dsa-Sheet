// We are given n array and we have to implement the linear search

#include<bits/stdc++.h>
using namespace std ;

bool checkTarget(vector<int>nums , int target , int index){
    if(index == nums.size()) return false ;

    return nums[index] == target || checkTarget(nums,target,index+1) ;
}



int main(){

vector<int>nums = {1};
int target ;
  
  cout << "Enter the target : " ;
  cin >> target ;

  if(checkTarget(nums,target,0)){
    cout << "We have our target "<<endl ;
  }else{
    cout << "No Found" <<endl ;
  }


    return 0 ;
}




