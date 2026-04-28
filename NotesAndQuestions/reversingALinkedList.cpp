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

class List{
    Node *head;
    Node *tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head; 
            head = newNode; 
        }
    }

    void reverse(){
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    tail = head;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        }
    head = prev;
    }

    Node *findMiddle(){
        if(head == NULL){
            return NULL;
        }
        
        Node *slow = head;
        Node *fast = head;

        while(fast != NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    void printLL(){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" <<endl;
    }
};



int main(){
    List l;
    l.push_front(10);
    l.push_front('a');
    l.push_front(20);
    l.push_front(30);
    l.printLL();
    // l.reverse();
    // l.printLL();

    Node *mid = l.findMiddle();
    if(mid != NULL){
        cout << "Middle element is: " << mid->data << endl;
    }

}