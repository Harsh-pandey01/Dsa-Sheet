// You are given three arrays sorted in increasing order. Find the elements that are common in all three arrays.

#include<bits/stdc++.h>
using namespace std ;

vector<int> commonElements(vector<int>&A,vector<int>&B,vector<int>&C){
vector<int>ans ;
int ptr1 =0 , ptr2 = 0 , ptr3 = 0 ;         
            
            while(ptr1 < A.size() && ptr2 < B.size() && ptr3 < C.size()){
                
                if(A[ptr1]== B[ptr2] && B[ptr2] == C[ptr3]){
                    if(ans.size() == 0){
                        ans.push_back(A[ptr1]);
                    }else{
                        if(ans.back() != A[ptr1]){
                            ans.push_back(A[ptr1]);
                        }
                    }
                    ptr1++ ;
                }else{
                    // increase the smallest pointer
                    if(A[ptr1] <= B[ptr2] && A[ptr1] <=C[ptr3]){
                        ptr1++ ;
                    }else if(B[ptr2] <= A[ptr1] && B[ptr2] <= C[ptr3]){
                        ptr2++ ;
                    }else{
                        ptr3++ ;
                    }
                }

            }
            
            return ans ;



}



int main(){

vector<int>arr1 = {1, 5, 10, 20, 40, 80};
vector<int>arr2 = {6, 7, 20, 80, 100};
vector<int>arr3 = {3, 4, 15, 20, 30, 70, 80, 120}; 

vector<int>common = commonElements(arr1,arr2,arr3);

for(auto i : common) cout << i << " ";

    return 0 ;
}