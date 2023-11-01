#include<iostream>
using namespace std;

bool graph[5][5] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 0},
    {1, 0, 0, 1, 0},
    {0, 1, 1, 0, 1},
    {0, 0, 0, 1, 0}
};

bool used[5];

bool checkVertex(int v) {
    used[v] = true;

    for (int i = 0; i < 5; i++) {
        if (graph[v][i] && !used[i]) {
            if (checkVertex(i)) {
                return true;
            }
        }
    }

    return false;
}

bool hamiltonianCircuit() {
    int startVertex = 0;

    for (int i = 0; i < 5; i++) {
        fill(used, used + 5, false);
        if (checkVertex(startVertex)) {
            return true;
        }
        startVertex++;
    }

    return false;
}

int main() {
    if (hamiltonianCircuit()) {
        cout << "Hamiltonian Circuit Exists!" << endl;
    } else {
        cout << "Hamiltonian Circuit Doesn't Exist!" << endl;
    }

    return 0;
}
