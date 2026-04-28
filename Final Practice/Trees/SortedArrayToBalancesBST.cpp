#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};


class Solution {
public:

    Node* helper(vector<int>& nums, int st, int end){
        if(st > end){
            return NULL;
        }
        int mid = st + (end - st) / 2;
        Node* root = new Node(nums[mid]);

        root->left = helper(nums, st, mid-1);
        root->right = helper(nums, mid+1, end);

        return root;
    }
    
    Node* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }
};

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};


    Solution s;
    Node* root = s.sortedArrayToBST(nums);

    inOrder(root);
    cout << endl;
}