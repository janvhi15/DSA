// // Print all the unique values in the array
#include <iostream>
using namespace std;
int main(){
    int arr[]= {1,2,5,3,1,6,2,3,4};
    int n = 9;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout << arr[i] << " ";
        }
    }
    
}
