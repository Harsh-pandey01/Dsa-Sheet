// We are given an array and we have to find the lexilogically next permutations

#include<bits/stdc++.h>
using namespace std ;

void findNextPermutation(vector<int>&arr){

// Step 1 :- Find the index which is having element less than its preceding index

int index = -1 ;

for(int i = arr.size()-2 ; i >=0 ; i--){
    if(arr[i] < arr[i+1]){
        index = i ;
        break ;
    }
}

if(index == -1) {
    reverse(arr.begin(),arr.end());
    return ;
}

for(int i = arr.size()-1 ; i > index ; i--){
    if(arr[i] > arr[index]){
        swap(arr[i] , arr[index]);
        break ;
    }
}

reverse(arr.begin()+index + 1 , arr.end()) ;

}

int main(){

vector<int>arr = {3,2,1} ;
findNextPermutation(arr);

for(auto i : arr) cout << i << " ";

    return 0 ;
}