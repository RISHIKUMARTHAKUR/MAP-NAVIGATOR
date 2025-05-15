#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

class Graph {
    int V;
    vector<pair<int, int>> *adj;

public:
    Graph(int V) {
        this->V = V;
        adj = new vector<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // For undirected graph
    }

    void dijkstra(int src) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(V, INF);
        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (auto &edge : adj[u]) {
                int v = edge.first;
                int weight = edge.second;

                if (dist[v] > dist[u] + weight) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }

        cout << "Shortest distances from node " << src << ":\n";
        for (int i = 0; i < V; ++i) {
            cout << "To " << i << ": " << (dist[i] == INF ? -1 : dist[i]) << endl;
        }
    }
};

int main() {
    int V = 6;
    Graph g(V);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 2, 1);
    g.addEdge(2, 1, 2);
    g.addEdge(1, 3, 1);
    g.addEdge(2, 3, 5);
    g.addEdge(3, 4, 3);
    g.addEdge(4, 5, 1);

    g.dijkstra(0);

    return 0;
}
