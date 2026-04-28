// #include <iostream>
// #include <algorithm>

// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this-> data = data;
//         this->next = NULL;
//     }
// };

// class LinkedList{
//     Node* head;
//     Node* tail;
//     int size;

//     public:
//     LinkedList(){
//         head = NULL;
//         tail = NULL;
//         size =0;
//     }

//     void insertAtBeginning(int value){
//         Node* newNode = new Node(value);
//         if(head == NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             newNode->next = head;
//             head = newNode;
//         }
//         size++;
//     }

//     void insertAtLast(int value){
//         Node* newNode = new Node(value);
//         if(head == NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             tail = newNode;
//         }

//         size++;
//     }

//     void insertAt(int index, int value){
//         if(index < 0 || index > size){
//             cout << "Invalid index" << endl;
//             return;
//         }

//         if(index == 0){
//             insertAtBeginning(value);
//             return;
//         }

//         if(index == size){
//             insertAtLast(value);
//             return;
//         }

//         Node* newNode = new Node(value);
//         Node* current =head;
//         for(int i=0;i<index-1;i++){
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;

//         size++;
//     }

//     void removeFirst(){
//         if(head == NULL){
//             cout << "Linked list is empty" << endl;
//             return;
//         }

//         if(head == tail) {
//             delete head;
//             head = tail = NULL;
//         }
//         else{
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//         }
//         size--;
//     }

//     Node* getPrevious(Node* node){
//         Node* current = head;
//         while(current!=NULL && current->next!= node){
//             current = current->next;
//         }
//         return current;
//     }

//     void removeLast(){
//         if(head == NULL){
//             cout << "Linked list is empty"<< endl;
//             return;
//         }
//         if(head == tail){
//             delete head;
//             head =tail = NULL;
//         }
//         else{
//             Node* prev = getPrevious(tail);
//             delete tail;
//             tail = prev;
//             tail->next = NULL;
//         }
//         size--;
//     }

//     void removeAt(int index){
//         if(index < 0 || index > size){
//             cout << "Invalid Index" << endl;
//             return;
//         }
//         if(index == 0){
//             removeFirst();
//             return;
//         }
//         if(index == size-1){
//             removeLast();
//             return;
//         }
//         Node* current = head;
//         for(int i=0;i<index-1;i++){
//             current = current->next;
//         }
//         Node* temp = current->next;
//         current->next = temp->next;
//         delete temp;

//         size--;
//     }

//     int getValue(int index){
//         if(index < 0|| index > size){
//             cout << "Invalid Index" <<endl;
//             return -1;
//         }
//         Node* current = head;
//         for(int i=0;i<index-1;i++){
//             current = current->next;
//         }
//         return current->data;
//     }

//     void getSize(){
//         cout << size << endl;
//     }

//     int* toArray(){
//         int* arr = new int[size];

//         Node* current = head;
//         int i = 0;

//         while(current!= NULL){
//             arr[i++] = current->data;
//             current = current->next;
//         }
//         return arr;
//     }

//     void sortedLinkedList(){
//         if(head == NULL || head->next == NULL){
//             return;
//         }

//         int* arr = toArray();

//         sort(arr, arr+size);

//         Node* current = head;
//         int i=0;
//         while(current != NULL){
//             current->data = arr[i++];
//             current = current->next;
//         }

//         delete[] arr;
//     }

//     void insertSorted(int value){
//         Node* newNode = new Node(value);

//         if(head == NULL){
//             head = tail = newNode;
//         }

//         else if(value <= head->data){
//             newNode->next = head;
//             head = newNode;
//         }

//         else{
//             Node* current = head;
//             while(current->next != NULL && current->next->data < value){
//                 current = current->next;
//             }
//             newNode->next = current->next;
//             current->next = newNode;

            
//             if(newNode->next == NULL){
//                 tail = newNode;
//             }
//         }


//         size++;
//     }

//     Node* middleNode(){
//         if(head == NULL){
//             return NULL;
//         }

//         Node* slow = head;
//         Node* fast = head;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }

//     Node* reverseList(Node* node){
//         Node* prev = NULL;
//         Node* current = node;
//         Node* next = NULL;
        
//         while(current != NULL){
//             next = current->next;
//             current->next = prev;
//             prev = current;
//             current = next;
//         }
//         return prev;
//     }

//     int checkPalindrome() {
//         if(head == NULL || head->next == NULL){
//             return 1;
//         }
//         Node* slow = head;
//         Node* fast = head;
//         while(fast->next != NULL && fast->next->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         Node* secondHalfFirst = reverseList(slow->next);
        
//         Node* first = head;
//         Node* second = secondHalfFirst;
//         int palindrome = 1;
        
//         while(second != NULL){
//             if(first->data != second->data){
//                 palindrome = 0;
//                 break;
//             }
//             first = first->next;
//             second = second->next;
//         }
//         slow->next = reverseList(secondHalfFirst);
//         return palindrome;
//     }

//     void display(){
//             if(head == NULL){
//                 cout << "Linked list is empty" << endl;
//                 return;
//             }
//             Node* temp = head;
//             while(temp!= NULL){
//                 cout << temp->data << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//     }


// };

// int main(){
    
//     LinkedList l;

//     l.insertAtBeginning(30);
//     l.insertAtBeginning(20);
//     l.insertAtBeginning(10);
//     l.insertAtLast(40);
//     l.insertAt(1,15);
//     l.insertAtBeginning(50);
//     l.insertAtBeginning(40);
//     l.insertAtBeginning(65);

//     l.removeFirst();
//     l.removeLast();
//     l.removeAt(1);
//     l.sortedLinkedList();
//     l.insertSorted(35);

//     l.display();
//     l.getSize();


//     cout << l.getValue(1) << endl;

// }