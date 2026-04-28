#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class circularQueue{
    int* arr;
    int cap, currSize;
    int f , r;

    public:
    circularQueue(int size){
        cap = size;
        arr = new int(cap);
        currSize = 0;
        f = 0;
        r = -1;
    }
    void push(int data){
        if(currSize == cap){
            cout << "Queue is Full" << endl;
            return;
        }

        r = (r+1)%cap;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if(empty()){
            cout << "Queue is empty" << endl;
            return;
        }
        f = (f+1)%cap;
        currSize--;
    }

    int front(){
        if(empty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool empty(){
        return currSize == 0;
    }
};

int main(){
    circularQueue c(3);
    c.push(1);
    c.push(2);
    c.push(3);
    c.pop();
    c.push(4);

    while(!c.empty()){
        cout << c.front() << " ";
        c.pop();
    }
    cout << endl;
}