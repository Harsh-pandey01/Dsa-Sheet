// We are given an array having only elements 0 1 2 and we want to sort that weithout using any sorting algorithm

#include<bits/stdc++.h>
using namespace std ;

int main(){

 vector<int>array = {2,2,1,1,0,1,0,2,0,1,1,1,0,2};

 /*
Approach 1 :- Sort the array and we have our desired result 
Approach 2 :- Count the elements and again place them on their position by manipulationg the elements
Approach 3 :- Using Dutch Flag Algo to solve the problem
 
 */

// -- Dutch flag Algorithm

int left = 0 , mid = 0 , right = array.size() -1 ;

while(mid < right){
    if(array[mid] == 1) mid++ ;
    else if(array[mid] == 0){
        swap(array[mid] , array[left]) ;
        left++ ;
        mid++ ;
    }else{
        swap(array[mid] , array[right]) ;
        right-- ;
    }
}

for(auto i : array) cout << i << " ";

    return 0 ;
}























