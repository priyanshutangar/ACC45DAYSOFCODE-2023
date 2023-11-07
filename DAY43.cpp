#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
using namespace std;

const int INF = INT_MAX;

// Function to print the constructed MST
void printMST(vector<pair<int, int>> edges) {
    cout << "Edge \tWeight\n";
    for (const auto& edge : edges) {
        cout << edge.first << " - " << edge.second << "\t" << edge.first + edge.second << "\n";
    }
}

// Function to implement Prim's algorithm
void primMST(vector<vector<pair<int, int>>>& graph) {
    int V = graph.size(); // Number of vertices in the graph
    vector<pair<int, int>> edges; // array to store MST
    vector<int> key(V, INF); // key values used to pick the minimum weight edge
    vector<bool> mstSet(V, false); // to represent the set of vertices not yet included in MST

    // Initialize the first key to 0 so that it is picked first
    key[0] = 0;

    // Use a priority queue (min-heap) to efficiently extract the minimum key vertex
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (mstSet[u]) continue;

        mstSet[u] = true;

        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (!mstSet[v] && weight < key[v]) {
                key[v] = weight;
                pq.push({key[v], v});
                edges.push_back({u, v});
            }
        }
    }

    // Now, you have constructed the MST. You can print the MST edges and their weights.
    printMST(edges);
}

int main() {
    int V; // Number of vertices
    cin >> V;
    vector<vector<pair<int, int>> > graph(V);

    // Input the graph as an adjacency list
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            int weight;
            cin >> weight;
            if (i != j) {
                graph[i].push_back({j, weight});
                graph[j].push_back({i, weight});
            }
        }
    }

    // Call the Prim's MST algorithm
    primMST(graph);

    return 0;
}
