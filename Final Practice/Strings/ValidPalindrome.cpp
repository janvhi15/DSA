#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string str = "madam";
    int st = 0, end = str.length()-1;
    while(st<=end){
        if(!isalnum(str[st])){
            st++;
            continue;
        }
        if(!isalnum(str[end])){
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end])){
            cout << "Not Palindrome" << endl;
            return 0;
        }
        st++;
        end--;
    }
    cout << "Palindrome" << endl;
    return 0;
}