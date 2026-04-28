#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class maxHeap{

    vector<int> heap;

    void heapifyUp(int index){
        int parent = (index -1)/2;

        if(index > 0 && heap[index] > heap[parent]){
            swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

    public:
    void insert(int val){
        heap.push_back(val);
        heapifyUp(heap.size()-1);
    }

    void printHeap(){
        for(int i: heap){
            cout << i << " ";
        }
        cout << endl;
    }
};

int main(){

    maxHeap h;
    h.insert(50);
    h.insert(30);
    h.insert(20);
    h.insert(10);
    h.insert(15);
    h.insert(5);
    h.insert(40);

    h.printHeap();
}