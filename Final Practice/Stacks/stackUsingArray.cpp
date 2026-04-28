#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#define SIZE 1000
using namespace std;

int top = -1;
int arr[SIZE];
class Stack{
    // vector<int> v;

    // public:

    // void push(int val){
    //     v.push_back(val);
    // }

    // void pop(){
    //     v.pop_back();
    // }

    // int top(){
    //     return v[v.size()-1];
    // }

    // bool empty(){
        // return v.size() == 0;
    // }

    public:

    int push(int val){
        arr[++top] = val;
        return val;
    }

    int pop(){
        return arr[top--];
    }


    bool empty(){
        return top == -1;
    }

    int peek(){
        return arr[top];
    }
    
};

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout << s.peek() << " ";
        s.pop();
    }
    cout << endl;
}