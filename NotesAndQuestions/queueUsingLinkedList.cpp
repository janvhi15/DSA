#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node *head;
    Node *tail;
    int count;

public:
    Queue(){
        head = tail = NULL;
    }

    void enqueue(int val, int MAX){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
        tail->next = newNode;
        tail = newNode;
        count++ ;
        }
    }

    void dequeue(){
        if(head == NULL){
            cout << "Queue is empty !" << endl;
            return;
        } 
        else{
        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;}
        count--;
    }

    bool isEmpty(){
        return head == NULL;
    }

    bool isFull(){ 
        if(count == MAX){
            return count;
        }
    }

    void display(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Queue q;
    q.enqueue(10,3);
    q.enqueue(20,3);
    q.enqueue(30,3);

    q.display(); 

    cout << "Dequeued: " << q.dequeue() << endl; 

    q.display();  
}
