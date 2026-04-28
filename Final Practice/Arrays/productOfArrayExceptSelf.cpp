// // Brute Force Approach
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr = {1,2,3,4};
//     vector<int> ans;
//     int n = arr.size();

//     for(int i=0;i<n;i++){
//         int prod = 1;
//         for(int j=0;j<n;j++){
//             if(i != j){
//                 prod *= arr[j];
//             }
//         }
//         ans.push_back(prod);
//     }
//     for(int x : ans){
//         cout << x << " ";
//     }
// }







// // Optimised Approach with O(n) time complexity and O(n) space complexity
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr = {1,2,3,4};
//     int n = arr.size();
//     vector<int> ans(n,1);
//     vector<int> suffix(n,1);
//     vector<int> prefix(n,1);

//     for(int i=1;i<n;i++){
//         prefix[i] = prefix[i-1] * arr[i-1];
//     }
//     for(int i= n-2; i>=0; i--){
//         suffix[i] = suffix[i+1] * arr[i+1];
//     }
//     for(int i =0; i<n; i++){
//         ans[i] = prefix[i] * suffix[i];
//     }
//     for(int x : ans){
//         cout << x << " ";
//     }
// }






// // Optimised Approach with O(n) time complexity and O(1) space complexity
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4};
    int n = arr.size();
    vector<int> ans(n,1);

    for(int i=1;i<n;i++){
        ans[i] = ans[i-1] * arr[i-1];
    }
    int suffix = 1;
    for(int i= n-2; i>=0; i--){
        suffix *= arr[i+1];
        ans[i] *= suffix;
    }

    for(int x : ans){
        cout << x << " ";
    }
}