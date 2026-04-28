#include <iostream>

using namespace std;

int main(){
    int arr[5] = {5,3,8,4,2};
    for(int i=0;i<5-1;i++){
        int minIndex = i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}