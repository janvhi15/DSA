#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,4,5,6,7,0,1,2};
    int n = 8;
    int target = 0;

    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + ((end - start) / 2);
        if(arr[mid] == target){
            cout << mid << endl;
            break;
        }
        if(arr[start] <= arr[mid]){
            if(arr[start] <= target && target <= arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{
            if(arr[mid] <= target && target <= arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
}