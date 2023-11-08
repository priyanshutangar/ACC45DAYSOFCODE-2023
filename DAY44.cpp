#include <bits/stdc++.h>
using namespace std;
#define INF 99999999

class Graph {
    int V;    // number of vertices
    vector<pair<int, int>> *adj;    // dynamic array of adjacency lists

public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w, int weight);   // function to add an edge to the graph
    void shortestPath(int src); // prints shortest path from src to all other vertices
};

Graph::Graph(int V) {
    this->V = V;
    adj = new vector<pair<int, int>>[V];
}

void Graph::addEdge(int v, int w, int weight) {
    adj[v].push_back(make_pair(w, weight));
    adj[w].push_back(make_pair(v, weight));
}

void print(vector<int> dist) {
    cout << "Vertex   Distance from Source\n";
    for (int i = 0; i < dist.size(); i++) {
        cout << i << "        " << dist[i] << endl;
    }
}

void Graph::shortestPath(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(V, INF);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto x : adj[u]) {
            int v = x.first;
            int weight = x.second;

            if (dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    print(dist);
}

int main() {
    int V = 5;
    Graph g(V);

    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 7);
    g.addEdge(2, 3, 3);
    g.addEdge(3, 4, 1);

    g.shortestPath(0);

    return 0;
}
