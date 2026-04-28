// #include <iostream>
// #include <algorithm>
// using namespace std;

// int partition(int arr[], int l, int r){
//     int x = arr[r];
//     int i = l-1;
//     for(int j = l;j<= r-1;j++){
//         if(arr[j]<=x){
//             i=i+1;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[r]);
//     return i+1;
// }

// void quickSort(int arr[], int low, int high){
//     if(low>= high)
//         return;
//     int temp = partition(arr, low, high);

//     quickSort(arr,low, temp-1);
//     quickSort(arr, temp+1, high);
// }

// int main(){
//     int arr[10] = {2, 4, 6, 8, 12, 1, 3, 4, 7, 9};

//     quickSort(arr, 0, 9);

//     for (int i = 0; i < 10; i++)
//         cout << arr[i] << " ";
// }