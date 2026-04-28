#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    vector<int> arr={-5,-9,-6,-3};
    stack<int> s;
    vector<int> ans(arr.size(), 0);

    for(int i=0; i<=ans.size()-1; i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    for(int val:ans){
        cout << val << " ";
    }
    cout << endl;
}