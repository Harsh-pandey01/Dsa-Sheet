// We are given an array containing pos and neg number , we have to return that array 
// Having alternate pos and neg numbers

#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int>arr = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8} ;
// Expected result :- {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}

// Bruteforce approach :- 
/*
Check if the index is even and value is pos :- search for the neg element and swap it
check if the index is odd and value is negative check for the pos and swap it 
if out we cannot find any index then break and hence the answer

 */

for(int i = 0 ; i < arr.size() ; i++){
    if(i%2 == 0){
        // Even index
        if(arr[i] >=0){
          int index = i +1 ;
          while(index < arr.size() && arr[index] >= 0){
            index++ ;
          }
          if(index == arr.size()) break ;
          swap(arr[i],arr[index]);
        }
    }else{
        if(arr[i] <0){
          int index = i +1 ;
          while(index < arr.size() && arr[index] < 0){
            index++ ;
          }
          if(index == arr.size()) break ;
          swap(arr[i],arr[index]);
        }
    }
}

for(auto i : arr) cout << i <<" ";

    return 0 ;
}