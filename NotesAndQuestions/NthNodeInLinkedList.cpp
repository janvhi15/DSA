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

Node* findNthFromStart(Node* head, int n){
    int count = 1;
    Node* temp = head;
    while(temp != NULL && count < n){
        temp = temp->next;
        count++;
    }
    if(temp == NULL) return NULL; 
    return temp;
}

// Node* findNthFromEnd(Node* head, int n) {
//     // Step 1: calculate length
//     int len = 0;
//     Node* temp = head;
//     while (temp != NULL) {
//         len++;
//         temp = temp->next;
//     }

//     if (n > len || n <= 0) return NULL;
//     temp = head;
//     for (int i = 1; i < len - (n - 1); i++) {
//         temp = temp->next;
//     }
//     return temp;
// }


Node* findNthFromEnd(Node* head, int n) {
    Node *main_ptr = head;
    Node *ref_ptr = head;

    for(int i=1; i<n; i++){
        ref_ptr = ref_ptr->next;

        if(ref_ptr == NULL){
            return NULL;
        }
    }

    while(ref_ptr->next != NULL){
        ref_ptr = ref_ptr->next;
        main_ptr = main_ptr->next;
    }
    return main_ptr;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int n = 3;
    Node* result = findNthFromStart(head, n);

    if(result != NULL)
        cout << "The " << n << "rd node is: " << result->data << endl;
    else
        cout << "List has fewer than " << n << " nodes." << endl;


    Node* nthEnd = findNthFromEnd(head, n);
    if(nthEnd != NULL)
        cout << n << "rd node from end is: " << nthEnd->data << endl;
    else
        cout << "List has fewer than " << n << " nodes (from end)." << endl;
    return 0;
}
