#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int n){
    bool isSwap = false;
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            isSwap = true;
            prev--;
        }
        arr[prev+1] = curr;
    }
    if(!isSwap){
            cout << "Already sorted" << endl;
        }
    else{
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    
    int n = 5;
    int arr[] = {4,1,5,2,3};

    insertionSort(arr, 5);
}