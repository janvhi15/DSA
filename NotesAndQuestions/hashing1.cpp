#include <iostream>
#include <vector>
using namespace std;

class Hashtable{
    public:
    vector<vector<int>> table;
    int key;
    int size;

    Hashtable(vector<int> v, int k, int s){
        key = k;
        size = s;
        table = vector<vector<int>>(size);
        for(int x : v){
            int index = x % size;
            table[index].push_back(x);
        }
    }

    void display(){
        for(int i = 0; i < size; i++){
            cout << i << ": ";
            for(int x : table[i]) cout << x << " ";
            cout << endl;
        }
    }
};

int main(){
    vector<int> v = {10, 21, 32, 43, 54};
    Hashtable h(v, 10, 5);
    h.display();
    return 0;
}