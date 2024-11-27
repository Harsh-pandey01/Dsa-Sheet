// We are given an array showing the price of stock of a day , we have to find the maximum profit that can be made by sellong the stocks after purchasing it

#include<bits/stdc++.h>
using namespace std ;

int bestResult(vector<int>arr){

int min =arr[0] ;
int ans = INT_MIN ;
for(int i = 1 ; i < arr.size() ; i++){
    int prof = arr[i] - min ;
    ans = max(ans,prof);
    if(arr[i] < min) min =arr[i];
}
return ans ;
}

int main(){

  vector<int>array = {7,1,5,3,6,4} ;

  cout << "Best stock result will be "<<bestResult(array)<<endl ;

    return 0 ;
}