#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    int st = s.find(part);
    while(s.length() > 0 && st < s.length()){
        s.erase(st,part.length());
    }

    cout << s << endl;
}