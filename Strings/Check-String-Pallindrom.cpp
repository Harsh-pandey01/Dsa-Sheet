// We are given a string and we have to find if the string is pallindrom or not

#include<bits/stdc++.h>
using namespace std ;

bool checkPallindrom(string str){
    int start = 0 ; 
    int end = str.size()-1 ;
    while(start < end ){
        if(str[start] != str[end]) return false ;
        start++ ;
        end-- ;
    }

    return true ;
}

int main(){

string str ;
cout << "Enter the string :" ;
getline(cin , str);

if(checkPallindrom(str)){
    cout << "String is Pallindrom" ; 
}else{
    cout << "String is not pallindrom" ;
}

    return 0 ;
}