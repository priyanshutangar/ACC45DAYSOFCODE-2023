#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Graph {
    int V;
    vector<int> *adj;

public:
    Graph(int V);

    void addEdge(int v, int w);

    void DFSUtil(int v, vector<bool> &visited);

    void DFS(int v);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new vector<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, vector<bool> &visited) {
    visited[v] = true;
    cout << v << " ";

    vector<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i) {
        if (!visited[*i]) {
            DFSUtil(*i, visited);
        }
    }
}

void Graph::DFS(int v) {
    vector<bool> visited(V, false);

    DFSUtil(v, visited);
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Depth First Traversal (start vertex 2) ";
    g.DFS(2);

    return 0;
}
