// We are given an array and we have to find the amount of water logged 
// into the block

#include<bits/stdc++.h>
using namespace std ;

int trappingRain(vector<int>&arr){

int maxHeight = 0 ;
int index = 0 ;
for(int i = 0 ; i < arr.size() ; i++){
    if(arr[i] > maxHeight) {
        maxHeight = arr[i];
        index = i ;
    }
}

int leftHeight = 0 ;
int ans = 0 ;
for(int i = 0 ; i < index ; i++){
    if(arr[i] < leftHeight){
        ans+=leftHeight - arr[i];
    }else{
        leftHeight = arr[i];
    }
}
int rightHeight = 0 ; 
for(int i = arr.size()-1 ; i > index ; i--){
    if(arr[i] < rightHeight){
        ans+=rightHeight-arr[i];
    }else{
        rightHeight = arr[i];
    }
}

return ans ;

}

int main(){

vector<int>arr = {4,2,0,3,2,5};

int maxWater = trappingRain(arr);

cout << "Max Trapped Water is "<<maxWater << endl ;

    return 0 ;
}