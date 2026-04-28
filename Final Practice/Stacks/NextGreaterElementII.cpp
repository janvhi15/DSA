#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){

    vector<int> arr = {3,6,5,4,2};
    int n = arr.size();
    stack<int> s;
    vector<int> ans(n,0);


    for(int i=2*(n-1); i>=0; i--){
        while(s.size() > 0 && s.top() <= arr[i%n]){
            s.pop();
        }
        if(s.empty()){
            ans[i%n] = -1;
        }
        else{
            ans[i%n] = s.top();
        }
        s.push(arr[i%n]);
    }

    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
}