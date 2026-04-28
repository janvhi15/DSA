#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int val){
        value = val;
        left = right = NULL;
    }
};

// class Tree{
//     public:
//     Node* root;

//     Tree(){
//         root = NULL;
//     }
// };

void PreOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->value << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}


void PostOrder(Node* root){
    if(root == NULL){
        return;
    }

    
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->value << " ";
}

void InOrder(Node* root){
    if(root == NULL){
        return;
    }

    InOrder(root->left);
    cout << root->value << " ";
    InOrder(root->right);
    
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "PreOrder traversal : " ;
    PreOrder(root) ;

    cout << endl;

    cout << "PostOrder traversal : " ;
    PostOrder(root);

    cout << endl;

    cout << "InOrder traversal : " ;
    InOrder(root);
}