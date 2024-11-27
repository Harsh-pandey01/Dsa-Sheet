// We are given some set of intervals ans we have to merge that interval and return the merge interval

#include<bits/stdc++.h>
using namespace std ; 

vector<vector<int>> mergeIntervals(vector<vector<int>>&intervals){

sort(intervals.begin() , intervals.end());
  vector<vector<int>>ans ;
for(int i = 0 ; i < intervals.size() ; i++){
      if(i == 0) ans.push_back(intervals[i]);

      if(intervals[i][0]<=ans.back()[1]){
        ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
      }else{
         ans.push_back(intervals[i]);
      }
}

return ans ;


}

int main(){

vector<vector<int>>intervals = {{1,3},{2,6},{8,10},{15,18}};

 vector<vector<int>>ans = mergeIntervals(intervals);
 
 for(int i = 0 ; i < ans.size() ; i++){
    for(int j = 0 ; j < ans[i].size() ; j++){
        cout << ans[i][j] << " ";
    }
 }


    return 0 ;
}