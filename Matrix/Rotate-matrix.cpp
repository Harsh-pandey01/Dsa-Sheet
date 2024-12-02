// We are given an matrix and we have to rotate the given matrix by 90 deg

#include<bits/stdc++.h>
using namespace std ;

void rotateBy90(vector<vector<int>>&mat){
    int rows = mat.size() ;
    int cols = mat[0].size() ;

    // Steps are simple :- We have to first take the transpose and then we have to smply swap the required cols or rows

    // Transpose of the matrix

    for(int i = 0 ; i < rows ; i++){
        for(int j = i ; j < cols ; j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }

    for(int i = 0 ;i < rows; i++){
        for(int j = 0 ; j < cols/2 ; j++){
            swap(mat[i][j] , mat[i][cols-j-1]);
        }
    }
}

int main(){

    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};

    rotateBy90(mat) ;

    for(int i = 0 ; i < mat.size() ; i++){
        for(int j = 0 ; j < mat[0].size() ; j++){
            cout << mat[i][j] << " ";
        }
    }

    return 0 ;
}