/*  Rotate the elements clockwise
        1 2 3 4
        5 6 7 8
        9 10 11 12
        13 14 15 16
    after rotation it will look like 
        5 1 2 3
        9 10 6 4
        13 11 7 8
        14 15 16 12
*/
#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int left = 0 , right = m-1 , top  = 0 ,bottom = n-1;

    while(left < right && top < bottom ){
        int temp = mat[top][left];
        for(int col = left+1; col <= right; col++){
            int k = mat[top][col];
            mat[top][col] = temp;
            temp = k;
        }
        top++;

        for(int row = top; row <= bottom; row++){
            int k = mat[row][right];
            mat[row][right] = temp;
            temp = k;
        }
        right--;

        for(int col = right; col >= left; col--){
            int k = mat[bottom][col];
            mat[bottom][col] = temp;
            temp = k;
        }
        bottom--;

        for (int row = bottom; row >= top; row--) {
          int k = mat[row][left];
          mat[row][left] = temp;
          temp = k;
        }
        left++;

        mat[top - 1][left - 1] = temp;
    }
}