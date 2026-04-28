#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
public:
    int V;
    list<int>* adjList;

    Graph(int vertices) {
        V = vertices;
        adjList = new list<int>[V];
    }

    void createEdge(int u, int dest) {
        adjList[u].push_back(dest);
        adjList[dest].push_back(u);
    }

    void removeEdge(int u, int v) {
        adjList[u].remove(v);
        adjList[v].remove(u);
    }

    bool helper(int u, int parent, vector<bool>& vis) {
        vis[u] = true;
        cout << u << " ";

        for (int v : adjList[u]) {
            if (!vis[v]) {
                if (helper(v, u, vis)) 
                    return true;      
            } else if (v != parent) {
                return true;
            }
        }
        return false;
    }

    bool DFS_withCycle(int start) {
        vector<bool> vis(V, false);
        bool cycleFound = helper(start, -1, vis);
        cout << endl;
        return cycleFound;
    }

    ~Graph() {
        delete[] adjList;
    }
};

int main() {
    Graph g(7);

    g.createEdge(0, 1);
    g.createEdge(0, 2);
    g.createEdge(2, 3);
    g.createEdge(2, 5);
    g.createEdge(3, 6);
    g.createEdge(3, 4);

    // g.createEdge(4, 2);

    cout << "DFS Traversal starting from vertex 0: ";
    bool cycle = g.DFS_withCycle(0);

    if (cycle)
        cout << "Graph contains a cycle." << endl;
    else
        cout << "Graph does NOT contain a cycle." << endl;

    return 0;
}
