// We are given an integer and we have to find the factorial of that big integer
#include<bits/stdc++.h>
using namespace std ;

//User function template for C++


    vector<int> factorial(int N){
        vector<int>ans(1,1);
       
        while(N>1){
            
            int carry = 0 ;
            int size = ans.size() ;
            int res =0;
            for(int i = 0 ; i < size ; i++){
                res = ans[i]*N + carry ;
                ans[i] = res%10;
                carry = res/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            
            N--;
            
        }
        
        reverse(ans.begin(),ans.end());
        
        return (ans);
    }


int main(){

int number ;
cout << "Enter the number" <<endl ;
cin >> number ;

vector<int>ans = factorial(number) ;

for(auto i : ans) cout << i ;

    return 0 ;
}












