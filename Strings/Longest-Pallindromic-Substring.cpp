// We are given a string and we have to return the longest pallindrom string and its size

#include<bits/stdc++.h>
using namespace std ;

bool checkPallindrom(string temp){
    int i = 0 , j = temp.size()-1 ;
    while(i < j){
        if(temp[i++]!=temp[j--]) return false ;
    }

    return true ; 
}

string maxLenPallindrom(string &str){
    // Approach 1:- Find all the possible substring 
    // For Each substring check if pallindrom or not , if yes check for max pallindrom and return it
 
    // Complexity analysis :- o(N*N) for substring and for each we have o(n) :- to check pallindrom

    string ans = "";
    

    for(int i = 0 ; i < str.size() ; i++){
        string temp = "";
        for(int j = i ; j < str.size() ; j++){
            temp+=str[j];

            bool isPallindrom = checkPallindrom(temp);

            if(isPallindrom){
                if(temp.size() > ans.size()){
                    ans = temp ;
                }
            }
        }
    }  
return ans ;
}

int main(){

string str ;
cout << "Enter the string :";
cin >> str ;

string ans = maxLenPallindrom(str);

cout << "The maximum size pallindromic substring is : "<<ans ;

    return 0 ;
}













