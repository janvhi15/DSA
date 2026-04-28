#include <iostream>
#include <algorithm>
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

    Node* merge2Lists(Node* h1, Node* h2){
        if(h1 == NULL || h2 == NULL){
            if(h1 == NULL){
                return h2;
            }
            else{
                return h1;
            }
        }
        if(h1->data <= h2->data){
            h1->next = merge2Lists(h1->next, h2);
            return h1;
        }
        else{
            h2->next = merge2Lists(h1, h2->next);
            return h2;
        }
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

    LinkedList l2;
    l2.push_front(8);
    l2.push_front(6);
    l2.push_front(5);
    l2.push_front(4);
    l2.push_front(2);

    l1.display();
    l2.display();

    LinkedList l;
    l.head = l.merge2Lists(l1.head,l2.head);

    l.display();
}