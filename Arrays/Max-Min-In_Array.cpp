// We are given an array and we have to find the max and min element of the array

#include <bits/stdc++.h>
using namespace std;

 pair<int,int>MaxMinElem(int arr[] , int size){
  int Maxi = INT_MIN ;
  int Mini = INT_MAX ;

  for(int i = 0 ; i < size ; i++){
    if(arr[i] > Maxi) Maxi =arr[i] ;
    if(arr[i] < Mini) Mini = arr[i] ;
  }

return {Maxi,Mini} ;
 }

int main()
{

    int array[5] = {1, 2, 3, 4, 5};

    pair<int,int>maxMinElement = MaxMinElem(array, 5);

    cout << "The Maxi and Mini Elements are " << maxMinElement.first << " "<< maxMinElement.second << endl ;

    return 0;
}