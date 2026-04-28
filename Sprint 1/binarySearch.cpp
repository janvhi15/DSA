// #include <iostream>
// using namespace std;
// int main(){
//     int arr[14] = {1,2,4,8,9,12,14,16,18,19,21,27,31,39};
//     int low = 0;
//     int key = 18;
//     int high = 14;
    
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(key==arr[mid]){
//             cout << "Found" << endl;
//             return true;
//         }
//         else if(key>arr[mid]){
//             low = mid+1;
//         }
//         else{
//             high = mid-1;
//         }
//     }
//     cout << endl;
// }








// #include <iostream>
// using namespace std;

// void Element(int arr[],int size,int index){
//     if(index>size || index<0){
//         return;
//     }

//     cout << arr[index] << endl;

//     Element(arr,size,index+1);
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     Element(arr, 4, 0);
//     return 0;
// }







#include <iostream>
using namespace std;

bool binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return false;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        return true; 
    }
    else if (key > arr[mid]) {
        return binarySearch(arr, mid + 1, high, key); 
    }
    else {
        return binarySearch(arr, low, mid - 1, key); 
    }
}

int main() {
    int arr[14] = {1, 2, 4, 8, 9, 12, 14, 16, 18, 19, 21, 27, 31, 39};
    int key = 18;
    int low = 0;
    int high = 13; 

    if (binarySearch(arr, low, high, key)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
