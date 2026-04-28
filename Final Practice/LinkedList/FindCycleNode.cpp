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

    Node* detectCycle(){
        Node* slow = head;
        Node* fast = head;

        bool isCycle = false;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                isCycle = true;
                break;
            }
        }
        if(!isCycle){
            return NULL;
        }

        slow = head;
        // Node* prev = NULL; // this is for removing a cycle
        while(slow != fast){
            slow = slow->next;
            // prev = fast; // this is for removing a cycle
            fast = fast->next;
        }

        // prev->next = NULL; // this is for removing a cycle
        return slow;
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
    l.push_front(5);
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);

    cout << l.detectCycle() << endl;
    l.display();
}