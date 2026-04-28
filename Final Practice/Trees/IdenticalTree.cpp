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
// if we will run it will not because of build tree

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* p = buildTree(preorder);
    Node* q = buildTree(preorder);
    
    cout << isIdentical(p,q) << endl; 
    

}