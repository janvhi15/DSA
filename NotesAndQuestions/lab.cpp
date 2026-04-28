#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtBeginning(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            
        }
    }

    void deleteAtMiddle(){
        if(head == NULL){
            cout << "Linked List is Empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = 
        
    }
}



int main(){
    
}