// We are given an 2d Matrix and we have to return the spiral triversal of the matrrix

#include <bits/stdc++.h>
using namespace std;

void spiralMat(vector<vector<int>>&mat){

int rows = mat.size() ;
int cols = mat[0].size();

int sRow = 0 , eRow = rows - 1, sCol = 0 , eCol = cols-1 ;
int cnt = 0 ;
int totalElements = rows*cols ;

while(cnt < totalElements){
    // Print the row first
    for(int i = sCol ; i <= eCol && cnt < totalElements; i++){
        cout << mat[sRow][i] << " ";
        cnt++;
    }
    sRow++ ;
    for(int i = sRow ; i <= eRow && cnt < totalElements ; i++){
        cout << mat[i][eCol] <<" ";
        cnt++;
    }
    eCol-- ;
     for(int i = eCol ; i >= sCol && cnt < totalElements ; i--){
        cout << mat[eRow][i] << " ";
        cnt++;
     }
     eRow-- ;

    for(int i = eRow ; i >= sRow && cnt < totalElements ; i--){
        cout << mat[i][sCol]<< " ";
        cnt++;
    }
    sCol++ ;
}

}


int main()
{

    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};

    spiralMat(mat) ;                           

    return 0;
}
