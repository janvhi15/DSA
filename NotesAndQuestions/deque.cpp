#include <iostream>
using namespace std;

class Deque{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Deque(int n){
        front = -1;
        rear = -1;
        size = n;
        arr = new int[n];
    }

    bool isFull() {
        return ((front == 0 && rear == size-1) || (front == rear+1));
    }


    bool isEmpty(){
        return front == -1;
    }

    void pushBack(int item){
        if(isFull()){
            cout << "Queue Overflow!" << endl;
            return;
        }

        rear = (rear+1) % size;
        arr[rear] = item;
    }

    void pushFront(int item){
        if(isFull()){
            cout << "Queue Overflow!" << endl;
            return;
        }

        front = (front+1) % size;
        arr[front] = item;
    }

    int popFront(){
        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        int poppedFrontItem = arr[front];

        front = (front+1) % size;
        return poppedFrontItem;
    }

    int popBack(){
        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        int poppedBackItem = arr[rear];

        rear = (rear+1) % size;
        return poppedBackItem;
    }


    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i+1) % size;
        }
        cout << endl;
    }

};

int main(){
    Deque q(5);

    q.pushBack(10);
    q.pushBack(20);
    q.pushBack(30);
    q.pushFront(40);
    q.pushFront(50);

    q.display();

    cout << "Popped : " << q.popBack() << endl;

    q.display();

    q.pushFront(60);
    q.display();


}