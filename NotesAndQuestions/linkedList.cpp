// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class List{
//     Node *head;
//     Node *tail;

//     public:
//     List(){
//         head = tail = NULL;
//     }

//     void push_front(int val){
//         Node *newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }
//         else{
//             newNode->next = head; 
//             head = newNode; 
//         }
//     }

//     void push_back(int val){
//         Node *newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }
//         else{
//             tail->next = newNode; 
//             tail = newNode; 
//         }
//     }

//     void pop_front(){
//         if(head == NULL){
//             cout << "Linked list is empty!" << endl;
//             return;
//         }
//         Node *temp = head;
//         head = head->next;
//         temp->next = NULL;

//         delete temp;
//     }

//     void pop_back(){
//         if(head == NULL){
//             cout << "Linked list is empty!" << endl;
//             return;
//         }
//         Node *temp = head;
//         while(temp->next!= tail){
//             temp = temp->next ;
//         }

//         temp->next = NULL;

//         delete tail;
//         tail = temp;
//     }


//     void printLL(){
//         Node *temp = head;
//         while(temp!=NULL){
//             cout << temp->data << "->";
//             temp = temp->next;
//         }
//         cout << "NULL" <<endl;
//     }
// };
// int main(){

//     List l;
//     l.push_front(10);
//     l.push_front('a');
//     l.push_back(20);
//     l.pop_front();
//     l.pop_back();
//     l.printLL();
// }





// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class LinkedList{
//     Node* head;
//     Node* tail;
//     int size;

//     public:
//     LinkedList(){
//         head = tail = NULL;
//         size = 0;
//     }

//     int index(int val){
//         int index = 0;

//         Node* current = head;
//         while(current != NULL){
//             if(current->data == val){
//                 return index;
//             }
//             current = current->next;
//             index++;
//         }
//         return -1;
//     }

//     void insertAtBeginning(int val){
//         Node* newNode = new Node(val);

//         if(head == NULL){
//             head = tail = newNode;
//             size++;
//             return;
            
//         }
//         else{
//             newNode->next = head;
//             head = newNode;
//         }
//         size++;
//     }

//     void insertAtEnd(int val){
//         Node* newNode = new Node(val);

//         if(head == NULL){
//             head = tail = newNode;
//             size++;
//             return;
            
//         }
//         else{
//             tail->next = newNode;
//             tail = newNode;
//         }
//         size++;
//     }

//     void insertAt(int index, int val){
//         if(index < 0 || index > size){
//             cout << "Error" << endl;
//             return;
//         }

//         if(index == 0) {
//             insertAtBeginning(val);
//             return;
//         }

//         if(index == size){
//             insertAtEnd(val);
//             return;
//         }

//         Node* newNode = new Node(val);
//         Node* current = head;

//         for(int i=0; i<index-1;i++){
//             current = current->next;
//         }

//         newNode->next = current->next;
//         current->next = newNode;

//         size++;
//     }

//     void popFront(){
//         if(head == NULL){
//             cout << "Linked List is empty" << endl;
//             size--;
//             return;
            
//         }

//         if(head == tail){
//             delete head;
//             head = tail = NULL;
//             size--;
//         }

//         Node* temp = head;
//         head = head->next;
//         temp->next = NULL;

//         delete temp;
//         size--;
//     }

//     void popBack(){
//         if(head == NULL){
//             cout << "Linked List is empty" << endl;
//             size--;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != tail){
//             temp = temp->next;
//         }

//         temp->next = NULL;

//         delete tail;
//         tail = temp;
//         size--;
//     }

//     void popAt(int index){
//         if(index < 0 || index > size){
//             cout << "Error" << endl;
//             return;
//         }

//         if(index == 0){
//             popFront();
//             return;
//         }

//         if(index == size){
//             popBack();
//             return;
//         }

//         Node* current = head;
//         for(int i=0; i<index-1; i++){
//             current = current->next;
//         }

//         Node* temp = current->next;
//         current->next = temp->next;

//         delete temp;
//         size--;
//     }

//     void display(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//         cout << size << endl;
//     }
// };

// int main(){
//     LinkedList l1;

//     l1.insertAtBeginning(4);
//     l1.insertAtBeginning(3);
//     l1.insertAtEnd(5);
//     l1.display();

//     l1.popFront();
//     l1.display();

//     l1.popBack();
//     l1.display();

//     l1.insertAt(0,2);
//     l1.display();

//     l1.insertAt(1,3);
//     l1.display();

//     l1.popAt(1);
//     l1.display();
// }





#include <iostream>
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
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    int index(int val){
        int index = 0;
        Node* current = head;
        while(current != NULL){
            if(current->data == val){
                return index;
            }
            current = current->next;
            index++;
        }
        return -1;
    }

    void insertAtBeginning(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            size++;
            return;
        }

        newNode->next = head;
        head = newNode;
        size++;
    }

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        tail = newNode;

        size++;
    }

    void insertAt(int index, int val){
        Node* newNode = new Node(val);
        if(index < 0 || index > size){
            cout << "Error" << endl;
            return;
        }
        if(index == 0){
            insertAtBeginning(val);
            size++;
            return;
        }
        if(index == size){
            insertAtEnd(val);
            size++;
            return;
        }

        Node* current = head;
        for(int i=0; i <index-1;i++){
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        size++;
    }

    void deleteFront(){
        if(head == NULL){
            cout << "Linked List is empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            size--;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
        size--;

    }

    void deleteBack(){
        if(head == NULL){
            cout << "Linked list is Empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            size--;            
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
        size--;
    }

    void deleteAt(int index){
        if(index < 0 || index > size){
            cout << "Error" << endl;
            return;
        }
        if(index == 0){
            deleteFront();
            size--;
        }
        if(index == size){
            deleteBack();
            size--;
        }
        Node* current = head;
        for(int i=0;i<index-1; i++){
            current = current->next;
        }

        Node* temp = current->next;
        current->next = temp->next;

        delete temp;
        size--;
    }

    void reverse(){
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;
        tail = head;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void display(){
        Node* current = head;
        while(current != NULL){
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
        cout << size << endl;
    }
};

int main(){
    LinkedList l1;
    l1.insertAtBeginning(3);

    l1.insertAtEnd(6);
    l1.insertAtEnd(7);

    l1.insertAt(1,4);
    l1.insertAt(2,5);
    l1.display();

    l1.reverse();
    l1.display();

    l1.deleteFront();
    l1.deleteBack();
    l1.deleteAt(1);
    l1.display();
}