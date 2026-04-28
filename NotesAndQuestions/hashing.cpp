#include <iostream>
#include <list>

using namespace std;

class HashTable {
private:
    int bucket;            
    list<int>* table;      
public:
    HashTable(int size) {
        bucket = size;
        table = new list<int>[bucket];
    }

    int hashFunction(int key) {
        return key % bucket;
    }

    void insertItem(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool searchItem(int key) {
        int index = hashFunction(key);

        for (auto x : table[index]) {
            if (x == key)
                return true;
        }
        return false;
    }

    void deleteItem(int key) {
        if(searchItem(key)){
            int index = hashFunction(key);
            table[index].remove(key);
            cout << "Key " << key << " deleted successfully.\n";
        }else{
            cout<<"Key not found ! \n";
        }
    }

    void displayHash() {
        for (int i = 0; i < bucket; i++) {
            cout << i;
            for (auto x : table[i])
                cout << " -> " << x;
            cout << endl;
        }
    }
};


int main() {
    int keys[] = {11, 12, 13, 14, 80, 17, 15, 24, 19};
    int n = sizeof(keys) / sizeof(keys[0]);
    HashTable h(7);
    for (int i = 0; i < n; i++)
        h.insertItem(keys[i]);
    cout << "Initial Hash Table:\n";
    h.displayHash();


    cout << "\nSearching 80...\n";
    if (h.searchItem(80))
        cout << "Key found!\n";
    else
        cout << "Key not found!\n";
    cout << "\nDeleting 80...\n";
    h.deleteItem(80);
    h.displayHash();
    cout << "\nDeleting 8...\n";
    h.deleteItem(8);
    h.displayHash();
    return 0;
}
