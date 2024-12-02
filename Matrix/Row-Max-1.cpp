// We are given an matrix and we have to return the row which is having the maximum number of 1

#include <bits/stdc++.h>
using namespace std;

int maxOnces(vector<vector<int>>& matrix){
    int index = 0 ;
    int maxCnt = 0 ;
    for(int i = 0 ; i < matrix.size() ; i++){
        int cnt = 0 ;
         for(int j = 0 ; j < matrix[i].size() ; j++){
            if(matrix[i][j] == 1) ++cnt;
         }

         if(cnt > maxCnt) {
            index = i ;
            cnt = maxCnt ;
         }
    }
    return index ;
}

int main()
{

    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}};

    cout << "The index having maximum 1 is " << maxOnces(matrix);

    return 0;
}
