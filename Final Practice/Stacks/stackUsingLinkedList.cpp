#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    Node* first;

    public:

    Stack(){
        first = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = first;
        first = newNode;
    }

    void pop(){
        if(first == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = first;
        first = first->next;
        temp->next = NULL;
        delete temp;

    }

    int top(){
        return first->data;
    }

    bool empty(){
        return first == NULL;
    }
};

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}