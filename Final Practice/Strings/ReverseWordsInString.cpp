#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string s = "the pen";
    reverse(s.begin(),s.end());

    int n = s.length();
    string ans = "";

    for(int i=0; i<n; i++){
        string word = "";
        while(i<n && s[i] != ' '){
            word += s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length() > 0){
            ans += " " + word;
        }
    }
    cout << ans.substr(1) << endl;
}