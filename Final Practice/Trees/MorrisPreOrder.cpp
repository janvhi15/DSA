#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
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

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

class Solution {
public:
    vector<int> preorderTraversal(Node* root) {
        vector<int> ans;
        
        Node* curr = root;
        while(curr != NULL){
            if(curr->left == NULL){
                ans.push_back(curr->data);
                curr = curr->right;
            }
            else{
                Node* IP = curr->left;
                while(IP->right != NULL && IP->right != curr){
                    IP = IP->right;
                }
                if(IP->right == NULL){
                    ans.push_back(curr->data);
                    IP->right = curr;
                    curr = curr->left;
                }
                else{
                    IP->right = NULL;
                    curr = curr->right;
                }
            }
        }
        return ans;
    }
};

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    Solution s;
    vector<int> arr = s.preorderTraversal(root);
    for(int i : arr){
        cout << i << " ";
    }
}