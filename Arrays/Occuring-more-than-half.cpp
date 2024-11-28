// We are given an array and we have to return the element which is occuring more 
// than n/2 times

#include<bits/stdc++.h>
using namespace std ;

int moreThanHalf(vector<int>array){
    // map<int,int>count ;
    // for(int i = 0 ; i < array.size() ; i++){
    //     count[array[i]]++ ;
    //     if(count[array[i]] >= array.size()/2) return array[i];
    // }

    // return -1 ;

    // Optimised Approach 
    
    int cnt = 0 ; 
    int elem = array[0] ;
    for(int i = 0 ; i < array.size() ; i++){
         if(cnt == 0) {
            elem = array[i] ;
            cnt = 1 ;
         }else{
            if(array[i] == elem) cnt++ ;
            else cnt-- ;
         }
    }
    if(cnt > 0 ){
        // the element we get may be the element we are looking for
        cnt = 0 ;
        for(int i = 0 ; i < array.size() ;  i++){
          if(array[i] == elem) cnt++ ;
        }

        if(cnt > array.size() / 2) return elem ;
    }

    return -1 ;
}

int main(){

// We have a bruteforce approach in which we can count the occurence of each element 
// Of the array and if we get the element then return the element

vector<int>arr = {1,2,3,1,1,4,1,1,1,1,2,4};

cout << "Element having count more than half is "<< moreThanHalf(arr)<<endl ;



    return 0 ;
}