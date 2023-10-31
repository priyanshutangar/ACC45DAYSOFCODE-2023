#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to represent an edge with weight
struct Edge {
    int src, dest, weight;
};

// Structure to represent a disjoint-set (for Union-Find)
struct DisjointSet {
    vector<int> parent, rank;

    DisjointSet(int n) {
        parent.resize(n);
        rank.assign(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else if (rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

// Compare function to sort edges by weight
bool compareEdges(const Edge &a, const Edge &b) {
    return a.weight < b.weight;
}

// Function to find the Minimum Spanning Tree using Kruskal's algorithm
void kruskalMST(vector<Edge> &edges, int V) {
    sort(edges.begin(), edges.end(), compareEdges);

    vector<Edge> result;
    DisjointSet ds(V);

    for (const Edge &edge : edges) {
        int rootSrc = ds.find(edge.src);
        int rootDest = ds.find(edge.dest);

        if (rootSrc != rootDest) {
            result.push_back(edge);
            ds.unionSets(rootSrc, rootDest);
        }

        if (result.size() == V - 1)
            break;
    }

    cout << "Edges in the Minimum Spanning Tree:\n";
    for (const Edge &edge : result) {
        cout << edge.src << " - " << edge.dest << " (Weight: " << edge.weight << ")\n";
    }
}

int main() {
    int V, E; // Number of vertices and edges
    cin >> V >> E;

    vector<Edge> edges(E);

    cout << "Enter edges (source destination weight):\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }

    kruskalMST(edges, V);

    return 0;
}
