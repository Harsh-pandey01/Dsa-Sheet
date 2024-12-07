// we are given a string and we have to return the mobile equivalent of the given string

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> mapped = {"2", "22", "222", "3", "33", "333", "4",
                             "44", "444", "5", "55", "555", "6", "66",
                             "666", "7", "77", "777", "7777", "8", "88",
                             "888", "9", "99", "999", "9999"};

    string str;
    cout << "Enter the string " << endl;
    getline(cin, str);
    string result = "";
    for (char c : str)
    {
        if (isalpha(c))
        {
            result += mapped[tolower(c) - 'a'];
        }
        else if (c == ' ')
        {
            result += "0"; // Space mapped to "0" on a classic keypad
        }
    }

    cout << "Mapping will be : " << result;

    return 0;
}
