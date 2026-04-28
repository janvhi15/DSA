#include <iostream>
#include <algorithm>
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

class Tree{
    public:
    Node* root;

    Tree(){
        root = NULL;
    }
};

void PreOrder(Node* root){
    if(root == NULL) return;

    cout << root->value << " ";
    PreOrder(root->left);
    PreOrder(root->right);
};

void PostOrder(Node* root){
    if(root == NULL) return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->value << " ";
};

void InOrder(Node* root){
    if(root == NULL) return;

    InOrder(root->left);
    cout << root->value << " ";
    InOrder(root->right);
};

int height(Node* root){
    if(root == NULL) return -1;

    if(root->left == NULL && root->right == NULL) return 0;

    return 1 + max(height(root->left), height(root->right));
};

bool find(Node* root, int value){
    if(root == NULL) return false;

    if(root->value == value) return true;

    return find(root->left, value) || find(root->right, value);
};

void NodesAtDistance(Node* root, int distance){
    if(root == NULL) return;

    if(distance == 0){
        cout << root->value << " ";
        return;
    }

    NodesAtDistance(root->left, distance-1);
    NodesAtDistance(root->right, distance-1);
}

int main(){
    // Tree t;
    // t.root = new Node(1);
    // t.root->left = new Node(2);
    // t.root->right = new Node(3);
    // t.root->left->left = new Node(4);
    // t.root->left->right = new Node(5);

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int val = 5;
    if(find(root, val)){
        cout << "Found" << endl;
    } else{
        cout << "Not Found" << endl;
    }

    cout << "Pre Order traversal: ";
    PreOrder(root) ;

    cout << endl;

    cout << "Post Order traversal: ";
    PostOrder(root);

    cout << endl;

    cout << "In Order traversal: ";
    InOrder(root);

    cout << endl;

    cout << "Height of tree : " << height(root) << endl;

    int distance = 2;
    cout << "Nodes at distance " << distance << " : ";
    NodesAtDistance(root, distance);
}


















#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countMinReversals(string expression) {
    string s = "";
    for (char c : expression) {
        if (c == '{' || c == '}') {
            s += c;
        }
    }

    if (s.length() % 2 != 0) {
        return -1;
    }

    int open = 0;
    int close = 0;

    for (char c : s) {
        if (c == '{') {
            open++;
        } else {
            if (open > 0) {
                open--;
            } else {
                close++;
            }
        }
    }

    return (open + 1) / 2 + (close + 1) / 2;
}

int main() {
    int t;
    if (cin >> t) {
        string temp;
        getline(cin, temp);
        while (t--) {
            string line;
            getline(cin, line);
            cout << countMinReversals(line) << endl;
        }
    }
    return 0;
}
