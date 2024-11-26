// We are given 2 arrays and we have to find the union of both 2 arrays
#include<bits/stdc++.h>
using namespace std ;

void unionOfArrays(vector<int>arr1 , vector<int>arr2){
    vector<int>result ;
    int i = 0 , j = 0 ;
    while( i < arr1.size() && j < arr2.size()){
        if(arr1[i] <= arr2[j]){
            if(result.back()!= arr1[i]) result.push_back(arr1[i]) ;
           i++;
        }else{
            if(result.back()!= arr2[j]){
                result.push_back(arr2[j]) ;
                
            }
            j++ ;
        }
    }
    while(i < arr1.size()){
        if(arr1[i]!=result.back()){
            result.push_back(arr1[i]) ;
           i++;
        }
    }
     while(j < arr2.size()){
        if(arr2[j]!=result.back()){
            result.push_back(arr2[j]) ;
           j++;
        }
    }

   for(auto res : result) cout<< res << " ";

}

int main(){

   vector<int>arr1 = {1, 2, 3, 4, 5};
   vector<int>arr2 = {1, 2, 3,6,7} ;
 
   unionOfArrays(arr1 , arr2) ;

    return 0 ;
}

















