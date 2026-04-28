// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]= {-1,0,4,5,9,12};
//     int n = 6;
//     int target = 12;

//     int start = 0; 
//     int end = n-1;
//     while(start <= end){
//         int mid = start + ((end - start) / 2);
//         if(target > arr[mid]){
//             start = mid + 1;
//         }
//         else if(target < arr[mid]){
//             end = mid - 1;
//         }
//         else{
//             cout << "Element Found at index: " << mid << endl;
//             break;
//         }
//     }
// }









// Using Recursion
#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int start, int end){
    int mid = start + ((end - start) / 2);
    if(target > arr[mid]){
        return binarySearch(arr, target, mid+1, end);
    }
    else if(target < arr[mid]){
        return binarySearch(arr, target, start, mid-1);
    }
    else{
        return mid;
    }
    return -1;
}

int main(){
    int arr[]= {-1,0,4,5,9,12};
    int n = 6;
    int target = 12;

    int start = 0; 
    int end = n-1;
    
    cout << binarySearch(arr, target, start, end) << endl;
}