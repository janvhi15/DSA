// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main(){
//     int arr[5] = {5,3,8,4,2};
//     for(int i=0;i<5-1;i++){
//         for(int j=0;j<5-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }





#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[5] = {2,3,4,5,6};
    for(int i=0;i<5-1;i++){
        bool flag = false;
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
            if(flag == false){
                break;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}