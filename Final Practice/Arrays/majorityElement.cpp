// // Brute Force approach for majority element or greatest frequency element
#include <iostream>
using namespace std;

int majorityElement(int nums[], int n){
    for(int i=0;i<n;i++){
        int freq = 0;
        for(int j=0;j<n;j++){
            if(nums[j] == nums[i]){
                freq ++;
            }
        }
        if(freq > n/2){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    int n = 5;
    int nums[] = {1,2,2,1,1};
    
    cout << majorityElement(nums, n) << endl;
}





// // Optimised approach for majority element or greatest frequency element
// // O(nlogn)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums, int n){
    sort(nums.begin(), nums.end());

    int freq = 1;
    int ans = nums[0];
    for(int i=0; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    int n = 5;
    vector<int> nums = {1,2,2,1,1};
    
    cout << majorityElement(nums, n) << endl;
}






// // Optimised approach for majority element or greatest frequency element using moore's voting algorithm
// // O(nlogn)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums, int n){
    int freq = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    int n = 5;
    vector<int> nums = {1,2,2,1,1};
    
    cout << majorityElement(nums, n) << endl;
}