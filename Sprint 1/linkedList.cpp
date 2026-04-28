// #include <iostream>
// using namespace std;

// // struct Node{
// //     int data;
// //     Node* next;
// // };

// class Node{
//     public:
//     int data;

//     Node* next;

//     Node(int value){
//         this->data = value;
//         this->next = NULL;
//     }
// };

// class LinkedList{
//     private:
//     Node* head;

//     public:
//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtLast(int value){
//         Node* newNode = new Node(value);
//         if(head == NULL){
//             head = newNode;
//             return;
//         }

//         Node* temp = head;

//         while(temp->next!=NULL){
//             temp = temp->next;
//         }

//         temp->next = newNode;
//     }

//     void insertAtBeginning(int value){
//         Node* newNode = new Node(value);
//         newNode->next= head;
//         head = newNode;
//     }

//     void insertAtPosition(int position,int value){
//         if(position<=0){
//             cout << "Invalid Position" << endl;
//             return;
//         }

//         Node* newNode = new Node(value);
//         if(position == 1){
//             insertAtBeginning(value);
//             return;
//         }
//         Node* temp = head;
//         for(int i=1; i<position-1 && temp->next!=NULL; i++){
//             temp = temp->next;
//         }

//         head->next = temp->next;
//         temp->next = newNode;
//     }

//     void display(){
//         Node* temp = head;
//         while(temp!= NULL){
//             cout << temp->data << "-> ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main(){
// //     int count = 0;
// //     Node* head = new Node();
// //     head->data = 45;
// //     head->next = NULL;

// //     Node* second = new Node();
// //     second->data = 56;
// //     second->next = NULL;

// //     Node* third = new Node();
// //     third->data = 68;
// //     third->next = NULL;

// //     Node* tail = new Node();
// //     tail->data = 58;
// //     tail->next = NULL;

// //     head->next = second;
// //     second->next = third;
// //     third->next = tail;

// //     Node* temp = head;

// //     while(temp!=NULL){
// //         cout << temp->data << " --> ";
// //         temp = temp->next;
// //         count++;
// //     }
// //     cout<< "NULL" << endl;
// //     cout << "Count is " << count << endl;




//     // Node* head = new Node(45);
//     // Node* second = new Node(56);
//     // Node* third = new Node(89);
//     // Node* tail = new Node(98);


//     // head->next = second;
//     // second->next = third;
//     // third->next = tail;

//     // Node* temp = head;

//     // while(temp!=NULL){
//     //     cout << temp->data << " --> ";
//     //     temp = temp->next;
//     // }
//     // cout<< "NULL" << endl;




//     LinkedList list;
//     list.insertAtLast(45);
//     list.insertAtLast(56);
//     list.insertAtBeginning(34);
//     list.insertAtBeginning(78);
//     list.insertAtPosition(2,99);
//     list.display();

// }












// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;

//     Node* next;

//     Node(int value){
//         this->data = value;
//         this->next = NULL;
//     }
// };

// class LinkedList{
//     private:
//     Node* head;

//     public:
//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtBeginning(int value){
//         Node* newNode = new Node(value);
//         newNode->next= head;
//         head = newNode;
//     }

//     void deleteAtLast(){
//         if (head == nullptr) {
//         cout << "List is empty. Nothing to delete.\n";
//         return;
//         }

//         if (head->next == nullptr) {
//             cout << "Deleting node with value: " << head->data << endl;
//             delete head;
//             head = nullptr;
//             return;
//         }

//         Node* temp = head;
//         while (temp->next->next != nullptr) {
//             temp = temp->next;
//         }
//         delete temp->next;
//         temp->next = nullptr;
//     }

//     void deleteAtBeginning(){
//         if (head == nullptr) {
//             cout << "List is empty. Nothing to delete.\n";
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     void deleteAtPosition(int position) {
//         if (position <= 0) {
//             cout << "Invalid position.\n";
//             return;
//         }

//         if (position == 1) {
//             deleteAtBeginning();
//             return;
//         }

//         Node* temp = head;

//         for (int i = 1; i < position - 1; i++) {
//             if (temp == nullptr || temp->next == nullptr) {
//                 cout << "Position out of range.\n";
//                 return;
//             }
//             temp = temp->next;
//         }

//         Node* nodeToDelete = temp->next;
//         if (nodeToDelete == nullptr) {
//             cout << "Position out of range.\n";
//             return;
//         }

//         temp->next = nodeToDelete->next;
//         delete nodeToDelete;
//     }

//     void display(){
//         Node* temp = head;
//         while(temp!= NULL){
//             cout << temp->data << "-> ";
//             temp = temp->next;
//         }
//         cout<< "NULL" << endl;
//     }
// };

// int main(){

//     LinkedList list;
//     list.insertAtBeginning(56);
//     list.insertAtBeginning(45);
//     list.insertAtBeginning(89);

//     list.deleteAtBeginning();

//     list.deleteAtLast();

//     list.insertAtBeginning(78);
//     list.insertAtBeginning(63);
//     list.insertAtBeginning(99);

//     list.deleteAtPosition(3);
    
//     list.display();

// }