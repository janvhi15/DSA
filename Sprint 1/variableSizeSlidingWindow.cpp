// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// bool isVowel(char ch) {
//     ch = tolower(ch);
//     return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
// }

// vector<int> countVowelsInSubstrings(string s, int k) {
//     vector<int> result;
//     int n = s.length();
//     int vowelCount = 0;

//     for (int i = 0; i < k; i++) {
//         if (isVowel(s[i])) {
//             vowelCount++;
//         }
//     }
//     result.push_back(vowelCount);

//     for (int i = k; i < n; i++) {
//         if (isVowel(s[i - k])) vowelCount--; 
//         if (isVowel(s[i])) vowelCount++;     
//         result.push_back(vowelCount);
//     }

//     return result;
// }

// int main() {
//     string s = "abciiidef";
//     int k = 3;

//     vector<int> output = countVowelsInSubstrings(s, k);
//     for (int count : output) {
//         cout << count << " ";
//     }
// }







// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {2, 1, 5, 1, 3, 2};
//     int n = arr.size();
//     int high = 0;  
//     int sum = 9;
//     int windowSum=0;

//     for (int i = 0; i < n; i++) {
//         while(windowSum < sum && high < n){
//             windowSum += arr[high];
//             high++;
//         }
//         if(windowSum == sum ){
//             cout << "Yes" << endl;
//             return 1;
//         }
//         windowSum-= arr[i];
//     }
//     cout << "No" << endl;
//     return 0;
// }






#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int longestUniqueSubstr(string s, int n) {
    unordered_map<char, int> hm;
    int maximum_length = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        if (hm.find(s[i]) != hm.end()) {
            start = max(start, hm[s[i]] + 1);
        }
        hm[s[i]] = i;
        maximum_length = max(maximum_length, i - start + 1);
    }

    return maximum_length;
}

int main() {
    string s = "abbcdeab";
    int n = s.length();
    cout << "Length of longest unique substring: " << longestUniqueSubstr(s, n) << endl;
    return 0;
}
