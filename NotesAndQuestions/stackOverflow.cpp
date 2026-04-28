// #include <iostream>
// using namespace std;

// #define MAX_SIZE 100

// class StackArray{
//     private:

//     int arr[MAX_SIZE];
//     int top;

//     public:

//     StackArray(){
//         top = -1;
//     }

//     bool isEmpty(){
//         return (top == -1);
//     }

//     bool isFull(){
//         return (top == MAX_SIZE-1);
//     }

//     void push(int value){
//         if (isFull()){
//             cout << "Stack Overfllow! Cannot push" << value << endl;
//             return;
//         }
//         arr[++top] = value;
//         cout << Value << "pushed to stack" <<endl;

//     }

//     int pop(){
//         if(isEmpty){
//             cout << "Stack Overfllow! Cannot pop" << value << endl;
//             return -1;
//         }

//         int value = arr[top--];
//         return value;
//     }
//     int peek(){
//         if(isEmpty()){
//             cout << "Stack is empty." << endl;
//             return -1;
//         }
//         return arr[top];
//     }
// }









// #include <iostream>
// using namespace std;

// #define MAX 10   

// class MyStack {
// private:
//     int items[MAX]; 
//     int count;      

// public:

//     MyStack() {
//         count = 0;
//     }


//     bool isEmpty() {
//         return count == 0;
//     }


//     bool isFull() {
//         return count == MAX;
//     }


//     void push(int value) {
//         if (isFull()) {
//             cout << "Stack Overflow! Cannot push " << value << endl;
//             return;
//         }
//         items[count++] = value;
//         cout << value << " pushed to stack." << endl;
//     }


//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack Underflow! Cannot pop." << endl;
//             return -1;
//         }
//         return items[--count];
//     }

//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty." << endl;
//             return -1;
//         }
//         return items[count - 1];
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty." << endl;
//             return;
//         }
//         cout << "Stack elements (top to bottom): ";
//         for (int i = count - 1; i >= 0; i--) {
//             cout << items[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     MyStack st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     st.display();

//     cout << "Top element is: " << st.peek() << endl;

//     cout << "Popped element: " << st.pop() << endl;

//     st.display();

//     return 0;
// }











#include <iostream>
#include <vector>
using namespace std;

class MyStack {
private:
    vector<int> items;   

public:

    void push(int value) {
        items.push_back(value);
        cout << value << " pushed into stack." << endl;
    }

    int pop() {
        if (items.empty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int topItem = items.back();
        items.pop_back();
        cout << topItem << " popped from stack." << endl;
        return topItem;
    }

    int peek() {
        if (items.empty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return items.back();
    }

    void display() {
        if (items.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = items.size() - 1; i >= 0; i--) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    cout << "Top element is: " << st.peek() << endl;

    cout << "Popped element: " << st.pop() << endl;

    st.display();

    return 0;
}
