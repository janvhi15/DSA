#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {0,3,8,9,5,2};

    int start = 0;
    int end = arr.size()-1;
    while(start <= end){
        int mid = start + ((end - start)/2);
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            cout << mid << endl;
            break;
        }
        if(arr[mid-1] < arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
}