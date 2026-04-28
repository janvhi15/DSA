// #include <iostream>
// using namespace std;

// void cardAndValue(int arr[], int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]*2==arr[j] || arr[i]==arr[j]*2){
//                 cout << "Yes";
//                 return ;
//             }
//         }
//     }
//     cout << "No";
// }

// int main(){
//     int arr[] = {2,7,3,9,6,15};
    
//     cardAndValue(arr,6);
// }






// #include <iostream>
// using namespace std;

// void intersectionOfArray(int arr[], int size, int nums[]){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(arr[i]==nums[j]){
//                 cout << arr[i];
//                 return ;
//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {7,9,4,5,6};
//     int nums[] = {14,2,15,16,4};
    
//     intersectionOfArray(arr,5,nums);
// }






// #include <iostream>
// using namespace std;

// void numberOfPairs(int arr[], int size, int target){
//     int count = 0;
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==target){
//                 count++;
//             }
//         }
//     }
//     cout << count;
// }

// int main(){
//     int arr[] = {3,0,6,2,7};
    
//     numberOfPairs(arr,5,9);
// }





#include <iostream>
using namespace std;

void equilibriumPoint(int arr[], int size){
    
    for(int i=1;i<size-2;i++){
        int leftsum = 0;
        int rightsum = 0;
        for(int j=i-1;j>=0;j--){
            leftsum+=arr[j];
        }
        for(int k=i+1;k<size;k++){
            rightsum+=arr[k];
        }

        if(rightsum == leftsum){
                cout << i << endl;
                return;
            }
    }  

    cout << -1;
}

int main(){
    int arr[] = {6,3,7,2,4,9,9};
    
    equilibriumPoint(arr,7);
}