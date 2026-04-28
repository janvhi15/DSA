#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;


    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList{
    Node* head;
    Node* tail;
    public:

    DoublyLinkedList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
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

    void pop_front(){
        if(head == NULL){
            cout << "Link is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = tail;
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
};

int main(){

    DoublyLinkedList dll;

    dll.push_front(3);
    // dll.push_front(2);
    // dll.push_front(1);

    // dll.push_back(4);
    // dll.push_back(5);

    dll.pop_front();

    // dll.pop_back();

    dll.display();

}