// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         this->data = value;
//         this->next = NULL;
//     }
// };

// int main() {
//     Node* head = new Node(45);
//     Node* second = new Node(56);
//     Node* third = new Node(68);
//     Node* tail = new Node(58);

//     head->next = second;
//     second->next = third;
//     third->next = tail;


//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " --> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;


//     Node* previous = NULL;
//     Node* current = head;
//     Node* next = NULL;

//     while (current != NULL) {
//         next = current->next;
//         current->next = previous;
//         previous = current;
//         current = next;
//     }
//     head = previous;

//     temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " --> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;

// }











// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         this->data = value;
//         this->next = NULL;
//     }
// };

// Node* mergeTwoLists(Node* head1, Node* head2) {
//     Node* tempNode = NULL; 
//     Node* head = NULL;    

//     if (head1->data <= head2->data) {
//         head = head1;
//         tempNode = head1;
//         head1 = head1->next;
//     } else {
//         head = head2;
//         tempNode = head2;
//         head2 = head2->next;
//     }

//     while (head1 && head2) {
//         if (head1->data <= head2->data) {
//             tempNode->next = head1;
//             tempNode = head1;
//             head1 = head1->next;
//         } else {
//             tempNode->next = head2;
//             tempNode = head2;
//             head2 = head2->next;
//         }
//     }

//     if (head1) tempNode->next = head1;
//     else tempNode->next = head2;

//     return head;
// }

// void printList(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " --> ";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* a1 = new Node(1);
//     Node* a2 = new Node(3);
//     Node* a3 = new Node(5);
//     a1->next = a2;
//     a2->next = a3;

//     Node* b1 = new Node(2);
//     Node* b2 = new Node(4);
//     Node* b3 = new Node(6);
//     b1->next = b2;
//     b2->next = b3;

//     cout << "List 1: ";
//     printList(a1);
//     cout << "List 2: ";
//     printList(b1);

//     Node* mergedHead = mergeTwoLists(a1, b1);

//     cout << "Merged list: ";
//     printList(mergedHead);

// }









// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         this->data = value;
//         this->next = NULL;
//     }
// };

// Node* findMiddle(Node* head) {
//     Node* slow = head;
//     Node* fast = head;

//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;           
//         fast = fast->next->next;     
//     }
//     return slow; 
// }

// void printList(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " --> ";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);

//     cout << "Linked list: ";
//     printList(head);

//     Node* middle = findMiddle(head);
//     cout << "Middle node: " << middle->data << endl;

// }












#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void sortLinkedList(Node* head) {
    if (!head) return;

    vector<int> arr;
    Node* temp = head;
    while (temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    sort(arr.begin(), arr.end());

    temp = head;
    int i = 0;
    while (temp != NULL) {
        temp->data = arr[i++];
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(5);
    head->next = new Node(1);
    head->next->next = new Node(4);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(3);

    cout << "Original Linked List: ";
    printList(head);

    sortLinkedList(head);

    cout << "Sorted Linked List: ";
    printList(head);1
}
