// We are given words followed by iregular spaces between the words , reverse the words with regular spces

#include<bits/stdc++.h>
using namespace std ;

string reverseWords(string & str)
{

stack<string>st ;
string temp = "";

for(int i = 0 ; i < str.size() ; i++){
    if(str[i]!= ' '){
        temp+=str[i];
    }else{
        // if temp is filled them push it in the stack and empty it
        if(!temp.empty()){
            st.push(temp);
            temp = "";
        }
    }
}

if(!temp.empty()) st.push(temp) ;
string ans = "";
while(!st.empty()){
    ans+=st.top() ;
    st.pop() ;
    if(!st.empty()) ans+=' ';
}

return ans ;

}




int main(){

string str ;
cout << "Enter the string : " ;
getline(cin , str);

string reversed = reverseWords(str);

cout << "The reversed strings are : " << reversed ;

    return 0 ;
}























