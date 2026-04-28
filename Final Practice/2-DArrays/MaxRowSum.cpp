#include <iostream>
#include <algorithm>
using namespace std;

// int getMaxSum(int matrix[][3], int r, int c){
//     int maxSum = INT_MIN;
//     for(int i=0; i<r; i++){
//         int rowsum = 0;
//         for(int j=0; j<c; j++){
//             rowsum += matrix[i][j];
//         }

//         maxSum = max(maxSum, rowsum);
//     }
//     return maxSum;
// }


int getMaxSum(int matrix[][3], int r, int c){
    int maxColSum = INT_MIN;
    for(int i=0; i<r; i++){
        int colsum = 0;
        for(int j=0; j<c; j++){
            colsum += matrix[j][i];
            maxColSum = max(maxColSum, colsum);
        }

    }
    return maxColSum;
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int r = 3;
    int c = 3;

    cout << getMaxSum(matrix, r, c) << endl;
}