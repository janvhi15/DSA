#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int partition(vector<int>& arr,int st, int end){
    int index = st -1, pivot = arr[end];
    for(int j=st; j<end; j++){
        if(arr[j] <= pivot){
            index++;
            swap(arr[j],arr[index]);
        }
    }

    index++;
    swap(arr[end], arr[index]);

    return index;
}

void quickSort(vector<int>& arr, int st, int end){
    if(st < end){
        int pivotIndex = partition(arr,st,end);

        quickSort(arr,st,pivotIndex-1);
        quickSort(arr,pivotIndex+1,end);
    }
}

int main(){

    vector<int> arr = {12,31,35,8,32,17};
    quickSort(arr, 0, arr.size()-1);

    for(int val:arr){
        cout << val << " ";
    }
    cout << endl;
}