#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int n;
    vector<vector<int>> adj;
    vector<int> visited;

public:
    Graph(int n) {
        this->n = n;
        adj = vector<vector<int>>(n);
        visited = vector<int>(n);
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    void DFS(int v) {
        visited[v] = true;
        for (int u : adj[v]) {
            if (!visited[u]) {
                DFS(u);
            }
        }
    }

    int countComponents() {
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (!visited[i]) {
                DFS(i);
                count++;
            }
        }
        return count;
    }
};

int main() {
    int city, roadComplete;
    cin >> city >> roadComplete;

    Graph g(city + 1);

    for (int i = 0; i < roadComplete; i++) {
        int x, y;
        cin >> x >> y;
        g.addEdge(x, y);
    }

    int count = g.countComponents() - 1;
    cout << count << endl;

    return 0;
}
