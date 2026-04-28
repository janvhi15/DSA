#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int idx = 0, n = chars.size();
    for(int i=0;i<n;i++){
        int ch = chars[i];
        int count = 0;
        while(i<n && chars[i] == ch){
            count ++;
            i++;
        }

        if(count == 1){
            chars[idx++] = ch;
        }
        else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(char digit: str){
                chars[idx++] = digit;
            }
        }
        i--;
    }
    cout << idx << endl;
}