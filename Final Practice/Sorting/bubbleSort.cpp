#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n){
    bool isSwap = false;
    for(int i=0; i<n-1; i++){
        
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        
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

    bubbleSort(arr, 5);
}