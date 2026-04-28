// undirected graph

// #include <iostream>
// #include <vector>
// using namespace std;

// void createEdge(vector<vector<int>> &adjMatrix, int source, int destination){
//     adjMatrix[source][destination] = 1;
//     adjMatrix[destination][source] = 1;
// }

// void displayMatrix(const vector<vector<int>> &adjMatrix){
//     int V = adjMatrix.size();
//     for(int i=0; i<=V-1; i++){
//         for(int j=0; j<=V-1; j++){
//             cout << adjMatrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int V = 5;
//     int E = 4;
    
//     vector<vector<int>> adjMatrix(V, vector<int>(V,0));

//     for (int i = 0; i < E; i++) {
//         int u, v;
//         cin >> u >> v;
//         createEdge(adjMatrix, u, v);
//     }

//     displayMatrix(adjMatrix);
// }







// directed graph

#include <iostream>
#include <vector>
using namespace std;

void createEdge(vector<vector<int>> &adjMatrix, int source, int destination, int weight){
    adjMatrix[source][destination] = weight;
}

void displayMatrix(const vector<vector<int>> &adjMatrix){
    int V = adjMatrix.size();
    for(int i=0; i<=V-1; i++){
        for(int j=0; j<=V-1; j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int V = 5;
    int E = 4;
    
    vector<vector<int>> adjMatrix(V, vector<int>(V,0));

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        createEdge(adjMatrix, u, v, w);
    }

    displayMatrix(adjMatrix);
}




