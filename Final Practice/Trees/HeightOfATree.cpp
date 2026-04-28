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

int height(Node* root){

    if(root == NULL){
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht, rightht) + 1;
}

int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount = count(root->left);
    int rightCount = count(root->right);
    return leftCount+rightCount+1;
}

int sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return leftSum+rightSum+root->data;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    
    cout << height(root) << endl;
    cout << count(root) << endl;
    cout << sumOfNodes(root) << endl;

}