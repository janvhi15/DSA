#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    Node *head;
    Node *tail;

    public:
    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->prev = tail;
            tail->next = newNode; 
            tail = newNode; 
        }
    }

    void pop_front(){
        if(head == NULL){
            cout << "Doubly Linked list is empty!" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "Linked list is empty!" << endl;
            return;
        }
        Node *temp = head;
        while(temp->next!= tail){
            temp = temp->next ;
        }

        temp->next = NULL;

        delete tail;
        tail = temp;
    }

    void printLL(){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" <<endl;
    }
};

int main(){
    DoublyList dl;
    dl.push_front(10);
    dl.push_front('a');
    dl.push_back(20);
    dl.pop_front();
    dl.printLL();


}