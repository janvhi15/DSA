#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int val){
        data = val;
        next = NULL;
        random = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    Node* tail;

    LinkedList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    Node* copyRandom(){
        if(head == NULL){
            return NULL;
        }

        unordered_map<Node*,Node*> m;
        Node* newHead = new Node(head->data);
        Node* oldTemp = head;
        Node* newTemp = newHead;

        while(oldTemp != NULL){
            Node* copyNode = new Node(oldTemp->data);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head; newTemp = newHead;
        while(oldTemp != NULL){
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }

    void display(){
       Node* curr = head;
       while(curr != NULL){
            cout << curr->data << " ";
            curr = curr->next;
       } 
       cout << endl;
    }
};

int main(){

    LinkedList l1;
    l1.push_front(10);
    l1.push_front(9);
    l1.push_front(7);
    l1.push_front(3);
    l1.push_front(1);


    l1.display();
    cout << l1.copyRandom() << endl;

}