// #include <iostream>
// using namespace std;

// void convertToCOO(int arr[4][5], int row, int column){
//     int nonZero = 0;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             if(arr[i][j]!=0){
//                 nonZero++;
//             }
//         }
//     }

//     int cooMatrix[nonZero][3];
//     int r = 0;

//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             if(arr[i][j]!=0){
//                 cooMatrix[r][0]=i;
//                 cooMatrix[r][1]=j;
//                 cooMatrix[r][2]= arr[i][j];
//                 r++;
//             }
//         }
//     }

//     for(int i=0;i<nonZero;i++){
//         for(int j=0;j<3;j++){
//             cout << cooMatrix[i][j] << " ";
            
//         }
//         cout << endl;
//     }

//     if(nonZero==0){
//         cout << "It is not sparse matrix" << endl;
//     }
// }

// int main(){
//     int arr[4][5]={
//         {0,0,3,0,4},
//         {0,0,5,7,0},
//         {0,0,0,0,0},
//         {0,2,6,0,0}
//     };
    
    
//     convertToCOO(arr,4,5);
    
// }







#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &v, const string &name){
    cout << name << ": ";
    for(int val : v){
        cout << val << " ";
    }
    cout << endl;
}

void convertToCSR(vector<vector<int>> &arr, vector<int> &values, vector<int> &colIndex, vector<int> &rowPtr){
    int rows = arr.size();
    int cols = arr[0].size();

    rowPtr.push_back(0);
    int count = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] != 0){
                values.push_back(arr[i][j]);
                colIndex.push_back(j);
                count++;
            }
        }
        rowPtr.push_back(count);
    }
}

int main(){
    vector<vector<int>> arr = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    vector<int> values;
    vector<int> colIndex;
    vector<int> rowPtr;

    convertToCSR(arr, values, colIndex, rowPtr);

    printVector(values, "Values");
    printVector(colIndex, "Column Index");
    printVector(rowPtr, "Row Pointer");

}
