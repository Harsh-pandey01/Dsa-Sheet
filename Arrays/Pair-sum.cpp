// We are given an integer and a value and we have to find the pair of indexes having sum equal to value


#include<bits/stdc++.h>
using namespace std ;

vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp ;
        vector<int>ans ;
        for(int i = 0 ; i < nums.size();i++){
            int remaining = target - nums[i];
            if(mp.find(remaining)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[remaining]);
                return ans ;
            }else{
                mp[nums[i]] = i ;
            }
        }
        ans.push_back(-1);
        ans.push_back(-1);

        return ans ;
    }

int main(){

vector<int>array = {6, 1, 8, 0, 4, -9, -1, -10, -6, -5};
int k ;
cout << "Enter the value of k "<<endl ;
cin >>k ;


vector<int>ans = twoSum(array , k) ;

    return 0 ;
}


























