// We are given an array of strings and we have to find the longest common prefix of the
// strings pesent

#include <bits/stdc++.h>
using namespace std;

void findtheLongestPrefix(vector<string> &str, int size)
{

    // Approach 1 :-
    sort(str.begin(), str.end());

    int i = 0, j = 0;
    int size1 = str[0].size();
    int size2 = str[size - 1].size();

    string ans = "";
    while (i < size1 && j < size2)
    {
        if (str[0][i] == str[size - 1][j])
        {
            ans.push_back(str[0][i]);

            i++;
            j++;
        }
        else
            break;
    }

    cout << "Longest Common Prefix is : " << ans;
}

int main()
{

    int size;
    cout << "Enter the size of vector : ";
    cin >>size ;
    cin.ignore(); // it handles a newline which is being entered as the size is being entered 
  
    vector<string> strings(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the string : ";
        getline(cin, strings[i]);
        cout << endl;
    }

    findtheLongestPrefix(strings, size);

    return 0;
}