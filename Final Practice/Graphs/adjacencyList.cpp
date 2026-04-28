#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Graph{
    int V;
    vector<vector<int>> adjlist;

    public:

    Graph(int V){
        this->V = V;
        adjlist.resize(V);
    }

    void addEdge(int u, int v){
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    void printMatrix(){
        for(int i=0; i<V; i++){
            cout << i << "->";
            for(int j : adjlist[i]){
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph g(4);  // 4 vertices: 0, 1, 2, 3


    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);


    // Print matrix
    g.printMatrix();


    cout << endl;
}
