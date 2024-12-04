// we are given an 2 strings and we have to return if the strings are 
// rotation of each or not

#include<bits/stdc++.h>
using namespace std ;

bool checkRotated(string s1 , string s2){
    // Approach 1 : -Find all the possible rotation of the one and check if anyone is correct

    // Now we have two cases - clock wise or anticlock wise both
    // Hence the solution will be 0(2 * n2) :- not a good approach

    // optimised Approach :-
    // Add first string 2 times to find the combined string 
    // check if s2 present in the combined or not if yes return true else false

    s1+=s1 ;

    if(s1.find(s2)!=-1) return true ;
    return false ;

}

int main(){

string s1 = "abcd" , s2 = "acbd";

if(checkRotated(s1,s2)){
    cout << "The string are rotation of each other" << endl ;
}else{
    cout << "they are not" <<endl ;
}


    return 0 ;
}