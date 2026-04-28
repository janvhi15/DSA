// check if an array is palindrome or not using two pointer

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isPalindrome(const vector<int>& arr){
//     int left = 0;
//     int right = arr.size() - 1;

//     while(left < right){
//         if(arr[left] != arr[right]){
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 2, 1};

//     if (isPalindrome(arr)) {
//         cout << "The array is a palindrome." << endl;
//     } else {
//         cout << "The array is not a palindrome." << endl;
//     }
// }








// very important question for exam 

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {9,6,5,2,3,2,5,-6,4,8,5,6,7,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 10;
    int count = 0;

    sort(arr, arr + n);

    int left = 0, right = n - 1;

    cout << "Pairs with sum 10 are:\n";
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == sum) {
            int l_val = arr[left], r_val = arr[right];
            int l_count = 0, r_count = 0;

            while (left < right && arr[left] == l_val) {
                l_count++;
                left++;
            }

            while (right >= left && arr[right] == r_val) {
                r_count++;
                right--;
            }

            if (l_val == r_val) {
                int pairs = (l_count * (l_count - 1)) / 2;
                for (int i = 0; i < pairs; i++) {
                    cout << "(" << l_val << ", " << r_val << ")\n";
                }
                count += pairs;
            } else {
                for (int i = 0; i < l_count * r_count; i++) {
                    cout << "(" << l_val << ", " << r_val << ")\n";
                }
                count += l_count * r_count;
            }
        }
        else if (currentSum < sum) {
            left++;
        }
        else {
            right--;
        }
    }

    cout << "Total number of pairs (including duplicates): " << count << endl;
    return 0;
}
