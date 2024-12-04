// We are given an string and we have to return the string in reverse order

#include<bits/stdc++.h>
using namespace std ;

int main(){

string str ;
cout << "Enter the string :" ;
getline(cin , str);
// Approach 1 :-
// reverse(str.begin(),str.end()) ;

// Approach 2 :- Using two pointer

int start = 0 , end = str.size()-1 ;
while(start <=end){
    swap(str[start++] , str[end--]);
}

cout << str ;

    return 0 ;
}





