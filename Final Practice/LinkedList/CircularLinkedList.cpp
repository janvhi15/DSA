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

class CircularLinkedList{
    Node* head;
    Node* tail;

    public:

    CircularLinkedList(){
        head = tail = NULL;
    }

    void InsertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
            // without head pointer code will be 
            // newNode->next = tail->next;
            // tail->next = newNode;
        }
    }

    void InsertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead(){
        Node* temp = head;
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
        }
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;

    }

    void deleteAtTail(){
        Node* temp = tail;
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
        }
        Node* prev = head;
        while(prev->next != tail){
            prev = prev->next;
        }
        tail = prev;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

    void display(){
        cout << head->data << "->";
        Node* curr = head->next;

        while(curr != head){
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << curr->data << endl;
    }


};

int main(){

    CircularLinkedList c1;
    c1.InsertAtHead(3);
    c1.InsertAtHead(2);
    c1.InsertAtHead(1);

    c1.InsertAtTail(4);

    c1.deleteAtHead();

    c1.deleteAtTail();

    c1.display();
}