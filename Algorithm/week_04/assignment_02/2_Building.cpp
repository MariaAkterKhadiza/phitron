#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+10;
class Edge{
public:
    int u,v,w;
    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};



bool cmp(Edge a, Edge b){
    return a.w < b.w;
}


int leader[N];
int group_size[N];


void dsu_inti(int n){
    for(int i=1; i<=n; i++){
        leader[i] = -1;
        group_size[i] = 1;
    }
}




int dsu_find(int node){
    if(leader[node] == -1){
        return node;
    }
    int l = dsu_find(leader[node]);
    leader[node] = l;
    return l;
}



void dsu_union(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if(leaderA > leaderB){
        leader[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        leader[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}




int main()
{
    int N,E;
    cin >> N >> E;
    dsu_inti(N);
    vector<Edge> EdgeList; 
    while (E--)
    {
        int u,v,w;
        cin >> u >> v >> w;
        EdgeList.push_back(Edge(u,v,w));
    }

    sort(EdgeList.begin(), EdgeList.end(), cmp);

    ll totalCost = 0;
    for(Edge ed : EdgeList){
        int leader_U = dsu_find(ed.u);
        int leader_V = dsu_find(ed.v);

        if(leader_U != leader_V){
            dsu_union(ed.u, ed.v);
            totalCost += ed.w;
        }
    }

    int center_leader = dsu_find(1);
    bool connected_edge = true;

    for(int i=2; i<=n; i++){
        if(dsu_find(i) != center_leader){
            connected_edge = false;
        }
    }
    if(connected_edge) cout << totalCost <<endl;
    else cout << -1 <<endl;
    
    return 0;
}