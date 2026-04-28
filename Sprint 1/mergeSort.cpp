// #include <iostream>
// #include <vector>
// using namespace std;

// void Merge(int arr1[], int n1, int arr2[], int n2, int arr3[]){
//     int i=0, j=0, k=0;
    
//     while(i<n1 && j<n2){
//         if(arr1[i]< arr2[j]){
//             arr3[k] = arr1[i];
//             i++;
//         } else{
//             arr3[k] = arr2[j];
//             j++;
//         }
//         k++;
//     }

//     while(i<n1){
//         arr3[k] = arr1[i];
//         i++;
//         k++;
//     }

//     while(j<n2){
//         arr3[k] = arr2[j];
//         j++;
//         k++;
//     }

//     for(int i = 0; i < 10; i++){
//         cout << arr3[i] << " ";
//     }
//     cout << endl;
    
// }

// int main(){
//     int arr1[5] = {2, 4, 6, 8, 9};
//     int arr2[5] = {1, 3, 4, 7, 12};
//     int arr3[10];

//     Merge(arr1, 5, arr2, 5, arr3);
    
// }












#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r- mid;

    int left[n1], right[n2];

    for(int i=0;i<n1;i++) left[i] = arr[l+i];
    for(int i=0;i<n2;i++) right[i] = arr[mid+1+i];

    int i=0, j=0, k=l;

    while(i<n1 && j<n2){
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while(i<n1) arr[k++] = left[i++];
    while(j<n2) arr[k++] = right[j++];

}

void mergeSort(int arr[], int l, int r){
    if(l>=r) return;

    int mid = l + ((r-l)/2);

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);
 
    
}

int main(){
    int arr[10] = {2, 4, 6, 8, 9, 1, 3, 4, 7, 12};

    mergeSort(arr, 0, 9);

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";


    
}