#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int mid){
    int painters = 1, blocks = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > mid){
            return false;
        }
        if(blocks + arr[i] <= mid){
            blocks += arr[i];
        }
        else{
            painters++;
            blocks = arr[i];
        }
    }
    if(painters > m){
        return false;
    }
    else{
        return true;
    }
}

int findPages(vector<int> &arr, int m){
    int n = arr.size();
    if(m > n){
        return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int ans = -1;
    int start = 0, end = sum;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans ;
}

int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4, m = 2;

    cout << findPages(arr, m) << endl;
}