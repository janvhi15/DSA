// // Brute Force approach for Maximum Subarray Sum
#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN;
    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end=st; end<n; end++){
            currSum = currSum + arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Max SubArray sum is : " << maxSum << endl;
}





// // Optimised approach (Kadane's Algorithm) for Maximum Subarray Sum
#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "Max SubArray sum is : " << maxSum << endl;
}