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
    Node* head;
    Node* tail;

    public:

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

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        Node* temp = head;
        if(head == NULL){
            return;
        }
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;
        if(head == NULL){
            return;
        }
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insertAt(int val, int pos){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        if(pos < 0){
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    int Search(int val){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == val){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void reverse(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    int middleNode(){
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;
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

    LinkedList l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);

    l.push_back(4);
    l.push_back(5);

    l.pop_front();

    l.pop_back();

    l.insertAt(1,1);

    cout << l.middleNode() << endl;

    l.display();

    l.reverse();

    l.display();

    cout << l.Search(1) << endl;
}