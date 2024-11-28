// We re given an array and we have to find the index (3) or 3 elements having sum 
// equal to a given number ....

#include<bits/stdc++.h>
using namespace std ;

bool threesum(vector<int>&arr, int sum){

// Bruteforce Apprach :-- Find all the pair of 3 elements possible and check for all the
// combinations possible

for(int i = 0 ; i < arr.size()-2 ; i++){
    for(int j = i+1 ; j < arr.size()-1 ; j++){
        for(int k = j+1 ; k < arr.size() ; k++){
                if(arr[i]+arr[j]+arr[k] == sum) return true ;
        }
    }
}

return false ;

// Optimised Appraoch :-
// Sort the array
sort(arr.begin() , arr.end());
// For each index try to use pair sum approach and hence get the desired result
for(int i =0 ; i < arr.size()-2 ; i++){
    int rem =  sum- arr[i] ;
    int j = i + 1 ;
    int k = arr.size()-1 ;
    while (j < k)
    {
        int addition = arr[j]+arr[k] ;
        if(addition == rem) return true ;

        if(addition < rem){
            j++;
        }else k++ ;
    }
}
return false ;

}

int main(){

vector<int>arr = {-1,0,1,2,-1,-4};
int number ; 
cout << "Enter the sum" <<endl ;
cin >> number ;

bool present = threesum(arr,number);

if(present){
    cout << "The sum is present" <<endl ;
}else{
    cout << "The sum is not present" <<endl ;
}

    return 0 ;
}


 