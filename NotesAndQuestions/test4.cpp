// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class List {
//     Node* head;
//     Node* tail;

// public:
    
//     List() {
//         head = NULL;
//         tail = NULL;
//     }


//     void push_front(int val) {
//         Node* newNode = new Node(val);
//         if (head == NULL) {
//             head = tail = newNode;
//             return;
//         }
//         newNode->next = head;
//         head = newNode;
//     }

//     void push_back(int val) {
//         Node* newNode = new Node(val);
//         if (head == NULL) {
//             head = tail = newNode;
//             return;
//         }
//         tail->next = newNode;
//         tail = newNode;
//     }

//     void pop_front(){
//         if (head == NULL) {
//             cout<<"List is empty"<<endl;
//             return;
//         }

//         Node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;

//     }

//     void pop_back(){
//         if (head == NULL) {
//             cout<<"List is empty"<<endl;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next->next !=NULL){
//             temp=temp->next;
//         }
//         temp->next = NULL;
//         delete temp->next;

//     }

//     Node* reverseList(Node* head){
//             if (head == NULL) {
//             cout << "List is empty" << endl;
//             return NULL;
//         }

//         Node* current  = head;

//         Node* previous = NULL;

//         Node* next = NULL;


//         while (current != NULL) {
//             next = current->next;   
//             current->next = previous; 
//             previous = current;     
//             current = next;         
//         }

//         head = previous;

//         return head;
        

//     }

// //  if there are 4 even elements in code and you want 3rd element as middle than use this code 
// //  otherwise use next code it will give 2nd element as middle there and also gives first middle elment in case of even numbers 

//     int findMiddle(){
//         if(head==NULL){
//             return 0;
//         }

//         Node *fast=head;
//         Node *slow=head;

//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//         }

//         return slow->data;
//     }

//     // int findMiddle(){
//     //     if(head==NULL){
//     //         return 0;
//     //     }

//     //     Node *fast=head;
//     //     Node *slow=head;

//     //     while(fast->next && fast->next->next){
//     //         slow = slow->next;
//     //         fast = fast->next->next;

//     //     }

//     //     return slow->data;
//     // }

//     int FindNode(int n) {
//         if (head == NULL) return -1;

//         Node* len = head;
//         int count = 0;

//         while (len) {
//             len = len->next;
//             count++;
//         }

//         if (n > count || n <= 0) return -1;

//         Node* temp = head;
//         for (int i = 1; i < n; i++) {
//             temp = temp->next;
//         }

//         return temp->data;
//     }

//     void FindNodeFromeEnd(int n){
//         if (head == NULL) return;

//         Node* len = head;
//         int count = 0;

//         while (len) {
//             len = len->next;
//             count++;
//         }
//         if (n > count || n <= 0) return;
//         // here we can also use v = count-n , by using this at end we need to print temp->next->data 
//         // this will not work if nummber of elements in LinkedList are 2
//         int v = count-n+1;

//         Node* temp = head;

//         for(int i=1;i<v;i++){
//             temp=temp->next;
//         }
//         cout<<temp->data;
       
//     }

//     void FindNodeFromEndUsingPointer(int N){

//         Node* len = head;
//         int count = 0;

//         while (len) {
//             len = len->next;
//             count++;
//         }

//         if (N > count || N <= 0) return;
//         Node* ref_ptr = head;
//         Node* main_ptr = head;

//         for(int i=1;i<N;i++){
//             ref_ptr = ref_ptr->next;

//             if(ref_ptr==NULL){
//                 return;
//             }
//         }

//         while(ref_ptr->next!=NULL){
//             ref_ptr = ref_ptr->next;
//             main_ptr = main_ptr->next;
//         }

//         cout<<main_ptr->data;


//     }

//     void printLL() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << "->";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }

//     Node* deleteGreater(Node* head, int X) {

//     while (head != NULL && head->data > X) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     if (head == NULL) return head;

//     Node* current = head;

//     while (current->next != NULL) {
//         if (current->next->data > X) {
//             Node* temp = current->next;
//             current->next = current->next->next;
//             delete temp;
//         } else {
//             current = current->next;
//         }
//     }

//     return head;
// }

// };

// int main() {
//     List l;
//     l.push_back(1);
//     l.push_back(2);
//     l.push_back(3);
//     l.push_back(4);
//     l.push_back(5);
//     l.push_back(6);
//     // l.push_back(7);
//     // l.FindNodeFromEndUsingPointer(3);
//     // l.FindNodeFromeEnd(2);
//     cout << l.findMiddle() << endl;
    
//     return 0;
// }






// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// int kthDistinct(vector<int> &arr, int K) {
//     unordered_map<int, int> freq;

//     for (int x : arr) {
//         freq[x]++;
//     }

//     int countDistinct = 0;
//     for (int x : arr) {
//         if (freq[x] == 1) {
//             countDistinct++;
//             if (countDistinct == K)
//                 return x;
//         }
//     }

//     return 0;  
// }

// int main(){
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, K;
//         cin >> N;

//         vector<int> arr(N);
//         for (int i = 0; i < N; i++)
//             cin >> arr[i];

//         cin >> K;

//         cout << kthDistinct(arr, K) << "\n";
//     }

//     return 0;
// }





// #include <iostream>
// #include <vector>
// using namespace std;

// int countTheLeaders(vector<int> &arr) {
//     int n = arr.size();
//     int leaders = 0;
//     int maxRight = INT_MIN;

//     for (int i = n - 1; i >= 0; i--) {
//         if (arr[i] > maxRight) {
//             leaders++;
//             maxRight = arr[i];
//         }
//     }

//     return leaders;
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> arr(N);
//     for (int i = 0; i < N; i++)
//         cin >> arr[i];

//     cout << countTheLeaders(arr);

//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

void countFrequency(string s) {
    map<char, int> mp;

    for (char c : s) {
        mp[c]++;
    }

    for (auto &p : mp) {
        cout << p.first << p.second << " ";
    }
}

int main() {
    string s;
    cin >> s;
    countFrequency(s);
    return 0;
}
