// We are given an array with the positive and negative element , try to move all the negative element at one end of the array

#include<bits/stdc++.h>
using namespace std ;

void moveNegative(vector<int>&array){
    int start = 0 ,end = array.size() -1 ;
    
    while(start < end){
        if(array[start] < 0 && array[end] > 0) {
            swap(array[start] , array[end]) ;
            ++start ;
            --end ;
        }
        if(array[start] > 0) start++ ;
        if(array[end] < 0) end--;
        
    }

}


int main(){

vector<int>array = {2,4,-10,-15,4,7,8,-1,-2,5,-7};

moveNegative(array);

for(auto i : array) cout << i << " ";
    return 0 ;
}












