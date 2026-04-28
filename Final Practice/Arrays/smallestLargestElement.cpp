// // Find the smallest element from the array
#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {5, 22, -15, 1, 24, 9};
    int smallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout << smallest << endl;
}




// // Find the largest element from the array
#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {5, 22, -15, 1, 24, 9};
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout << largest << endl;
}