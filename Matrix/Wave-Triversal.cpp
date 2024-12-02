// We are given a matrix and we have to triverse the matrixin the wave form

#include<bits/stdc++.h>
using namespace std ;

void waveMat(vector<vector<int>>& matrix){
  
  int rows = matrix.size() ;
  int cols = matrix[0].size() ;

  for(int i = 0 ; i < cols ; i++){
    if(i%2 == 0){
        // Even hai toh start se end 
        for(int j = 0 ; j < rows ; j++){
            cout << matrix[j][i] << " " ;
        }
    }else{
        for(int j = rows-1 ; j >= 0 ; j--){
            cout << matrix[j][i] << " ";
        }
    }
    cout << endl ;
  }

}


int main(){


    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};

    waveMat(mat);
   
    return 0 ;
}

















