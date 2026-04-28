#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,3,3,4,4,8,8};
    int n = 9;

    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + ((end - start)/2);
        if(mid == 0 && arr[0] != arr[1]){
            cout << arr[mid] << endl;
            break;
        }
        if(mid == n-1 && arr[n-1] != arr[n-2]){
            cout << arr[mid] << endl;
        }
        if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]){
            cout << arr[mid] << endl;
            break;
        }
        if(mid % 2 == 0){
            if(arr[mid-1] == arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(arr[mid-1] == arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
}