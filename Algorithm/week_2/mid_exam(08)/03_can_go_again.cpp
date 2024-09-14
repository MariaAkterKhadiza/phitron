#include <bits/stdc++.h>
using namespace std;

const long long infinity = 1e18;

class Edge {
public:
    int u, v;
    long long w;
    Edge(int u, int v, long long w) : u(u), v(v), w(w) {}
};

bool bellman_ford(int n, vector<Edge>& edges, int s, vector<long long>& dist) {
    dist[s] = 0;  

    for (int i = 0; i < n - 1; i++) {
        bool relaxed = false;
        for (auto edge : edges) {
            if (dist[edge.u] != infinity && dist[edge.u] + edge.w < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
                relaxed = true;
            }
        }
        if (!relaxed) break;
    }

    for (auto edge : edges) {
        if (dist[edge.u] != infinity && dist[edge.u] + edge.w < dist[edge.v]) {
            return false;  
        }
    }

    return true; 
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<Edge> edges; 

    for (int i = 0; i < e; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int s;
    cin >> s;
    vector<long long> dist(n + 1, infinity);  

    if (!bellman_ford(n, edges, s, dist)) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int d;
        cin >> d;

        if (dist[d] == infinity) {
            cout << "Not Possible" << endl;
        } else {
            cout << dist[d] << endl;
        }
    }

    return 0;
}