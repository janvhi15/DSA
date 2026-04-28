#include <iostream>
using namespace std;

#define MAX 5 

class MyQueue{
    int items[MAX];
    int front;
    int rear;
    int count;

    public:
    MyQueue(){
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isFull(){
        return count == MAX;

    }

    bool isEmpty(){
        return count ==0;
    }

    void enqueue(int item){
        if(isFull()){
            cout << "Queue Overflow!" << endl;
            return;
        }

        rear = (rear+1)%MAX;
        items[rear] = item;
        count++;
    }

    int dequeue(){
        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        int dequeuedItem = items[front];

        front = (front+1) % MAX;
        count--;
        return dequeuedItem;
    }

    int peek(){
        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return items[front];

    }

    void display(){
        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for(int i = 0; i < count; i++){
            int index = (front + i) % MAX;
            cout << items[index] << " ";
        }
        cout << endl;
    }
};

int main(){
    MyQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Front element: " << q.peek() << endl;

    q.display();

    q.enqueue(60);
    q.display();


}