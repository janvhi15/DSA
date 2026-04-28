#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Graph{
    int V;
    vector<vector<int>> adjMatrix;

    public:
    Graph(int V){
        this->V = V;
        adjMatrix.resize(V, vector<int>(V,0));
    }

    void addEdge(int u , int v){
        if(u >= V || v >= V || u <0 || v< 0){
            cout << "Invalid" << endl;
        }

        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }

    void printMatrix(){
        for(int i=0; i<V; i++){
            for(int j = 0; j<V; j++){
                cout << adjMatrix[i][j] << " ";
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