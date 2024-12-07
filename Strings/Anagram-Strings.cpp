// We have given two strings and we have to return if the strings are anagram strings or not

/*
Example 1:
Input: CAT, ACT
Output: true
Explanation: Since the count of every letter of both strings are equal.

Example 2:
Input: RULES, LESRT 
Output: false
Explanation: Since the count of U and T  is not equal in both strings.
*/


#include<bits/stdc++.h>
using namespace std ;


bool checkAnagram(string &str1,string &str2){

    //    Approach 1 :-
       // if two strings are anagram then after sorting both we will have same strings
    //    sort(str1.begin() , str1.end());
    //    sort(str2.begin() , str2.end());

    //    return str1 == str2 ;

    // Approach 2 ;- Using a freq array

    vector<int>freq(26 , 0);

    for(auto i : str1) freq[i -'a']++ ;
    
    for(auto i : str2) freq[i-'a']-- ;

    for(auto i : freq) {
        if(i > 0) return false ;
    }

return true ;

}





int main()
{
 
 string str1 , str2 ;

 cout << "Enter the first string :";
 getline(cin,str1);
 cout <<"Enter the second string :";
 getline(cin , str2);

 if(checkAnagram(str1,str2)) cout << "They are anagrams " <<endl; 
 else cout << "They are not anagrams " <<endl ;


    return 0 ;
}























