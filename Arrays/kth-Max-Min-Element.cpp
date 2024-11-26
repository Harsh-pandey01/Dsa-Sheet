// We are given an array and with a k , we have to find the kth max and kth min element of the array

#include<bits/stdc++.h>
using namespace std ;

void findKthMaxMinElement(vector<int>array , int k){
    /*
    Algorithm :- Sort the array
    if the duplicates are present or not based on that the approach changes 

     --- if theduplicate is not present the solution will be simply return the kth element for kth largest element and same for mini
     --- if the duplicates are present then we have to loop through the array to get the  desired element

     ---lets take if duplicates are present
     */

    sort(array.begin() , array.end()) ;
    int size = array.size() ;
    // find the kth maxi element
    int cnt = 1 ;
  
    for(int i = size -2 ; i >=0 ; i--){
        if(array[i]!=array[i+1]) {
            ++cnt ;
            if(cnt == k){
                cout << "The kth max Element is" << array[i] <<endl ;
                break ;
            }
        }
    } 
    cnt = 1 ;
    for(int i = 1 ; i <=size-1 ; i++){
        if(array[i]!=array[i-1]) {
            ++cnt ;
            if(cnt == k){
                cout << "The kth min Element is" << array[i] <<endl ;
                break ;
            }
        }
    } 
}


/* --- Most Optimised Approach Will Be Based On the Priority Queue*/

int main(){

   vector<int>array = {7,8,2,4,5,6,7,9,5};
   int k ;
   cout << "Enter the value of k" << endl ;
   cin >> k ;

   findKthMaxMinElement(array,k);

    return 0 ;
}
























