#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

set<vector<int>> s;

void combinationSum(vector<int>& candidates,int i, vector<int>& combine,vector<vector<int>>& ans, int target) {
    int n = candidates.size();
    
    if(i==n || target < 0){
        return;
    }

    if(target == 0){
        if(s.find(combine) == s.end()){
            ans.push_back(combine);
            s.insert(combine);
        }
        return;
    }
    
    combine.push_back(candidates[i]);
    combinationSum(candidates,i+1,combine,ans,target-candidates[i]);
    combinationSum(candidates,i,combine,ans,target-candidates[i]);
    combine.pop_back();
    combinationSum(candidates,i+1,combine,ans,target);
}

int main(){

    vector<int> arr = {2,3,5};
    int target = 8;
    vector<vector<int>> ans;
    vector<int> combine;

    combinationSum(arr,0,combine,ans,target);
    
    for(auto &x:ans){
        for(int val:x){
            cout << val << " ";
        }
        cout << endl;
    }

}