// #include <iostream>
// #include <vector>
// using namespace std;

// void insertAtIndex(vector<int> &nums, int value, int index){
//     if(index < 0|| index > nums.size()){
//         cout << "Invalid Index" <<endl;
//         return;
//     }

//     nums.push_back(0);

//     for(int i=nums.size()-1;i>index;i--){
//         nums[i] = nums[i-1];
//     }
//     nums[index] = value;
// };

// int main(){
//     vector<int> numbers = {1,2,3,4,5};
//     int value = 45;
//     int index = 2;

//     cout << "Before Inserting the element" << endl;
//     cout << "Size of vector: "<< numbers.size() << endl;
//     for(int num: numbers){
//         cout << num << " ";
//     }

//     insertAtIndex(numbers,value,index);

//     cout << "After Inserting the element" << endl;
//     cout << "Size of vector: "<< numbers.size() << endl;
//     for(int num: numbers){
//         cout << num << " ";
//     }
// }









// #include <iostream>
// #include <vector>
// using namespace std;

// void deleteAtIndex(vector<int> &nums, int index){
//     if(index < 0 || index >= nums.size()){
//         cout << "Invalid Index" << endl;
//         return;
//     }

//     // Shift elements left from index
//     for(int i = index; i < nums.size() - 1; i++){
//         nums[i] = nums[i + 1];
//     }

//     // Remove the last element
//     nums.pop_back();
// }

// int main(){
//     vector<int> numbers = {1, 2, 3, 4, 5};
//     int index = 2;

//     cout << "Before deleting the element" << endl;
//     cout << "Size of vector: " << numbers.size() << endl;
//     for(int num : numbers){
//         cout << num << " ";
//     }
//     cout << endl;

//     deleteAtIndex(numbers, index);

//     cout << "After deleting the element" << endl;
//     cout << "Size of vector: " << numbers.size() << endl;
//     for(int num : numbers){
//         cout << num << " ";
//     }
//     cout << endl;

// }






// #include <iostream>
// using namespace std;

// void moveZerosToEnd(int arr[], int n) {
//     int index = 0;  

//     for(int i = 0; i < n; i++) {
//         if(arr[i] != 0) {
//             arr[index++] = arr[i];
//         }
//     }

//     while(index < n) {
//         arr[index++] = 0;
//     }

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     moveZerosToEnd(arr, n);

// }







// #include <iostream>
// using namespace std;

// void countFrequency(int arr[], int n, int key) {
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             count++;
//         }
//     }
//     cout << count;
// }

// int main() {
//     int n = 8;
//     int arr[n] = {1,2,3,4,2,3,2,2};
//     int key = 2;

//     countFrequency(arr, n, key);

// }




// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int freq[100] = {0}; 

//     for(int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }

//     for(int i = 0; i < 100; i++) {
//         if(freq[i] != 0) {
//             cout << i << " -> " << freq[i] << endl;
//         }
//     }
// }






// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int freq[100] = {0}; 

//     for(int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }

//     for(int i = 0; i < 100; i++) {
//         if(freq[i] != 0) {
//             cout << i << " -> " << freq[i] << endl;
//         }
//     }
// }






// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int freq[100] = {0}; 

//     for(int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }

//     for(int i = 0; i < n; i++) {
//         if(freq[arr[i]] > 1) {
//             cout << "First repeating element is: " << arr[i] << endl;
//             break;
//         }
//     }
// }







#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[100] = {0}; 

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] > 1) {
            cout << "First repeating element is: " << arr[i] << endl;
            break;
        }
    }
}