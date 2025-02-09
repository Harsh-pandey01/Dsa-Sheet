//  in this we learn about why how and when we need pointer

// pointer is used to store the address of the a variable
#include<bits/stdc++.h>
using namespace std ;

int main(){


    int num = 12 ;
    int *ptr = &num ;
    
    cout << ptr << endl ;


    // bad practice we always need to initialise the pointer 
    // never do int *ptr ;
    // ptr = &nums ; no this is not a very greate appoach 

  // -------- imp 
  //  int *ptr says that ptr is a pointer pointing to a location and haivng integer 


  int *p = &num ;
  (*p)++ ;
  cout << num;
     
  //  copying a pointer

  int *q = p ; //  here is a  pointer which is pointing to p


   // ----------------------------------- Arrays and the pointing

   int arr[10] = {0} ;
   cout << "Add of 1st block is " <<arr << endl  ;
 
    cout << &arr[0] << endl;
    cout << *arr << endl ;
    cout << *(&arr[0])  << endl ;











    return 0 ;
}













