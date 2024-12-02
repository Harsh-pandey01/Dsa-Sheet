// We are given a matrix which is row sorted

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    // Approach 1 :-Bruteforce using a linear search on all the elements of the matrix

    // Approach 2 : - Go to each row and apply binary seach on the row if the target fits on the range present on the row

    // Approach 3 :- Using the concept of bianry search at entire matrix

    int rows = matrix.size();
    int cols = matrix[0].size();

    int start = 0;
    int end = rows * cols - 1;

    while (start <= end)
    {

        int mid = end - (end - start) / 2;
        int rowIndex = mid / cols ;
        int colIndex = mid %cols ;

        if(matrix[rowIndex][colIndex] == target) return true ;

        if(matrix[rowIndex][colIndex] < target)start = mid +1 ;
        else end = mid - 1 ;             
    }

    return false ;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
    };

    int target;
    cout << "Enter the value of target " << endl;
    cin >> target;

    bool present = searchMatrix(matrix, target);
    if(present) cout<< "target is Present" <<endl ;
    else cout << "Target is not present" <<endl ;


    return 0;
}
