// // Reverse an array
#include <iostream>
using namespace std;

void Reverse(int arr[], int n){
    int start =0;
    int end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = 7;
    
    Reverse(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}