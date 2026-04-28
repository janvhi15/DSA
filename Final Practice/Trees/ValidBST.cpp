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

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }
    return root;
}

Node* buildBst(vector<int> arr){
    Node* root = NULL;

    for(int val : arr){
        root = insert(root, val);
    }

    return root;
}

class Solution {
public:
    bool helper(Node* root, Node* min, Node* max) {
        if(root == NULL){
            return true;
        }
        if(min != NULL && min->data >= root->data){
            return false;
        }
        if(max != NULL && max->data <= root->data){
            return false;
        }

        return helper(root->left,min,root)  && helper(root->right,root,max);
    }
    bool isValidBST(Node* root) {
        return helper(root,NULL, NULL);
    }
};

int main(){
    vector<int> arr = {2,1,3};

    Node* root = buildBst(arr);

    Solution s;
    cout << s.isValidBST(root) << endl;
}