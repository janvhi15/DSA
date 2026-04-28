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

Node *reverse(Node *head){
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

bool isIdentical(Node *n1, Node *n2){
    while(n1 && n2){
        if(n1->data != n2->data){
            return false;
        }
        n1 = n1->next;
        n2 = n2->next;
    }
    return (n2 == NULL); 
}


bool isPalindrome(Node *head){
    if(!head || !head->next){
        return true;
    }

    Node *slow = head;
    Node *fast = head;

    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *head2 = reverse(slow->next);
    slow->next = nullptr;

    bool ret = isIdentical(head, head2);

    head2 = reverse(head2);
    slow->next = head2;

    return ret; 
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    bool result = isPalindrome(head);

    if(result){
        cout << "The linked list is a Palindrome." << endl;
    }
    else{
        cout << "The linked list is NOT a Palindrome." << endl;
    }
}
