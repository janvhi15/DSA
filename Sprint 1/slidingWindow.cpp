// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr = {1,2,3};
//     int n=arr.size();
//     int count = 0;

//     // for(int start=0;start<n;start++){
//     //     for(int end = start; end<n; end++){
//     //         for(int k=start;k<=end;k++){
//     //             cout << arr[k];
//     //         }
//     //         cout << endl;
//     //     }
//     // }



//     for(int start=0;start<n;start++){
//         for(int end = start; end<n; end++){
//             int sum = 0;
//             for(int k=start;k<=end;k++){
//                 sum+= arr[k];
//             }
//             if(sum==5){
//                 count++;
//             }
//         }
//     }
//     cout << "Count : " << count <<  endl;
// }






// #include <iostream>
// #include <map>
// #include <unordered_map>
// using namespace std;
// int main(){
//     // map<char,int> charMap;
//     unordered_map<char,int> charMap;
//     charMap['C'] = 1;
//     charMap['D'] = 1;
//     charMap['A'] = 1;

//     for(const auto&m : charMap){
//         cout << m.first << ":" <<m.second << endl;
//     }
// }






// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = arr.size();
//     int k = 3;  
//     int maxSum = -1;
//     int sum = 0;

//     for (int i = 0; i < k; i++) {
//         sum += arr[i];

//         if (sum > maxSum) {
//             maxSum = sum;
//         }
//     }

//     for (int i = k; i < n ; i++) {
//             sum += arr[i] - arr[i-k];

//         if (sum > maxSum) {
//             maxSum = sum;
//         }
//     }

//     cout << "Max Sum = " << maxSum << endl;
// }







// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {2, 1, 5, 1, 3, 2};
//     int n = arr.size();
//     int high = 0;  
//     int sum = 0;
//     int windowSum=0;

//     for (int i = 0; i < n; i++) {
//         while(windowSum < sum && high < n){
//             windowSum += arr[high];
//             high++;
//         }
//         if(windowSum == sum ){
//             return true;
//         }
        
// }
// }





#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = arr.size();
    int k = 3;  
    int minSum = -;
    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    for (int i = k; i < n ; i++) {
            sum += arr[i] - arr[i-k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << "Max Sum = " << maxSum << endl;
}