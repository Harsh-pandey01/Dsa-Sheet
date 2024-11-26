// We are given an array and we have to cylindrically rotate the array by one digit
/*
{1,2,3,4,5} -> {5,1,2,3,4} using for loop

Method 2 : - rotate the first n-1 elemets and last 1{4,3,2,1,5} -> reverse the array and get the result{5,1,2,3,4}
*/

#include<bits/stdc++.h>
using namespace std ;


void rotateArray(vector<int>&array){
    for(int i = array.size()-1 ; i > 0 ; i--){
        swap(array[i],array[i-1]);
    }
}

int main(){

vector<int>array = {1,2,3,4,5};
rotateArray(array);

for(auto i : array) cout << i << " ";

    return 0 ;
}
