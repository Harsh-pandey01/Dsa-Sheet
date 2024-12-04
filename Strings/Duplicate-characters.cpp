// We have a string and we have to find the duplicate characters in strings\

/*
Given a string S, the task is to print all the duplicate characters with their occurrences in the given string.

Example:

Input: S = “geeksforgeeks”
Output:
e, count = 4
g, count = 2
k, count = 2
s, count = 2

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Approach :-1 - sort the string and find all the duplicate elements
    // find the elements and their occurence
    string str = "geeksforgeeks";

    // sort(str.begin(), str.end());
    // int cnt = 1;
    // for (int i = 1; i < str.size(); i++)
    // {
    //     if (str[i] == str[i - 1])
    //         cnt++;
    //     else
    //     {
    //         if (cnt > 1)
    //         {
    //             cout << "Element : " << str[i - 1] << " , cnt : " << cnt << endl;
    //             cnt = 1;
    //         }
    //     }

    //     if(i == str.size()-1 && cnt > 1){
    //         cout << "Element : " << str[i] << " , cnt : " << cnt << endl;
    //     }
    // }

    // Approach 2 :- Usinf freq array to store the freq of the lements

    int freq[26] = {0} ;

    for(auto i : str){
        int index = i -'a';
        freq[index]+=1;
    }

    for(int i = 0 ; i < 26 ; i++){
        if(freq[i] > 1){
            char ch = i + 'a';
           cout << "Element : " << ch << " , cnt : " << freq[i] << endl;
      
        }
    }

    return 0;
}
