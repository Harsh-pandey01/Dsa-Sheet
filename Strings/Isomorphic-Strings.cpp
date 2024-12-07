// We are given two strings and we have to return if they both are isomophic or not

#include<bits/stdc++.h>
using namespace std ;

bool checkIsomorphic(string &s1 , string &s2){
    // If the size of both are different then return false 
    if(s1.size()!= s2.size()) return false ;

    // decalring a vector to mark the characters present in both
    vector<int>s1present(128 , -1) ;
    vector<int>s2present(128,-1);

    for(int i = 0 ; i < s1.size() ; i++){
        char c1 = s1[i];
        char c2 = s2[i];
     if(s1present[s1[i]] == -1 && s2present[s2[i]] == -1){
            s1present[c1] = c2;
            s2present[c2] = c1;
     }else if(s1present[c1] != c2 || s2present[c2] != c1){
       return false ;
     }

    }

return true ;

}

int main(){

string s1 ,s2 ;

cout << "Enter the first string : " ;
getline(cin , s1) ;
cout << "Enter the second string : " ;
getline(cin , s2);

if(checkIsomorphic(s1,s2)) cout << "Both are isomorphic" << endl ;
else cout << "Both are not isomorphic" <<endl ;

    return 0 ;
}













