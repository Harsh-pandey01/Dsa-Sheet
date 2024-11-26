// We are given an array with the maximum jump taken from that position and
//  we have to find the minimum number of jumps required to reach the end of the array

#include<bits/stdc++.h>
using namespace std ;

int minJumps(vector<int>&array){

/*
Bruteforce Approach 
1. Check if the curremt elememt can have max jump upto end , if yes then jump
2. if not try to jump at the maximum element in range to get the minimum jumps
*/

// int jumps = 0 ;
// int index = 0;
// while (index  < array.size())
// {
//     if(array[index] >= array.size()-index - 1){
//         jumps++ ;
//         return jumps ;
//     }else{
//         // find the maximum index to jumps on
//        int nextIndex = index+1 ;
//        int maxi = array[index+1];
//        for(int i = index+1 ; i <= index + array[index] && i < array.size(); i++){
//         if(array[i] > maxi) {
//             maxi = array[i] ;
//             nextIndex = i ;
//         }
//        }

//        jumps++ ;
//        index = nextIndex ;
        
//     }
// }

// return jumps ;










// ------------------------------- Optimised Approach ---------------------


int jumps = 0 ;
int maxRange = 0 ;
int currentRange = 0 ;
for(int i = 0 ; i < array.size() ; i++){
  maxRange = max(maxRange , i + array[i]);

  if(currentRange == i){
    jumps++ ;
    currentRange = maxRange ;
  }

}

if(currentRange >= array.size()-1) return jumps ;
return -1 ;




}

int main(){

vector<int>array = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};

int jumps = minJumps(array);
cout << jumps << endl ;
    return 0 ;
}