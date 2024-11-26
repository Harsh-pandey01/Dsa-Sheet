// We are given an array having a duplicate element we have to find the duplicate element 

#include<bits/stdc++.h>
using namespace std ;

void findDuplicate(vector<int>&array){
    int ans = 0 ;
    for(int i = 0 ; i < array.size() ; i++){
        ans = ans^array[i] ;
    }

    for(int i = 1 ; i < array.size() ; i++) ans = ans^ i ;

cout << "Duplicate is " << ans ;

}

int main(){

   vector<int>array = {1,3,4,2,2};
   findDuplicate(array);


    return 0 ;
}