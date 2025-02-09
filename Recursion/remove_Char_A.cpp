// we are given an string and we have to remove the character a from the string

#include<bits/stdc++.h>
using namespace std ;

string removeChar(string str , int index){
    if(index == str.size()) return "";

    if(str[index]!='a') return str[index] + removeChar(str,index+1);
    return removeChar(str,index+1);
}

int main(){

string str = "abbacabasc";

string res = removeChar(str,0);

cout << res << " " ;
    return 0 ;
}









