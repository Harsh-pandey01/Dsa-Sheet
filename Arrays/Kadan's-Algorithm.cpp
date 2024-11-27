// We are given an array and we have to find thesum of the array

#include<bits/stdc++.h>
using namespace std ;

int main()
{

 vector<int>arr = {1,2,-3,-4,5,-6,7};
 
 int sum = 0 ;
 int ans = arr[0] ;
 for(int i = 0 ; i < arr.size() ; i++){
    sum+=arr[i];
    ans = max(ans,sum) ;

    if(sum < 0) sum = 0 ;
 }

 cout << "Maximum Subarray sum is" <<ans <<endl ;

    return 0 ;
}