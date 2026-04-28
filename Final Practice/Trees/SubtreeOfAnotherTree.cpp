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

bool isIdentical(Node* p, Node* q){
    if(p == NULL || q == NULL ){
        return p == q;
    }
    int isLeftSame = isIdentical(p->left, q->left);
    int isRightSame = isIdentical(p->right, q->right);
    return isLeftSame && isRightSame && p->data == q->data;
}

bool isSubTree(Node* root, Node* subroot){
    if(root == NULL || subroot == NULL){
        return root == subroot;
    }
    if(root->data == subroot->data && isIdentical(root, subroot)){
        return true;
    }
    return isSubTree(root->left, subroot) ||
    isSubTree(root->right, subroot);
}

int main(){

}