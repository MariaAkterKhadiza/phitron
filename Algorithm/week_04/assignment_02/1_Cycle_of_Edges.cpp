#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int group_size[N];

void dsu_initialize(int N){
    for(int i=0; i<N; i++){
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node){
    if(parent[node] == -1){
        return node;
    }
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if(group_size[leaderA] > group_size[leaderB]){
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()
{
    int N,M;
    cin >> N >> M;
    dsu_initialize(N);
    int count_cycle = 0;
    while (M--)
    {
        int A,B;
        cin >> A >> B;
        int leaderA = dsu_find(A);
        int leaderB = dsu_find(B);

        if(leaderA != leaderB){
            dsu_union_by_size(A,B);
        }
        else{
            count_cycle++;
        }
        
    }
    cout << count_cycle << endl;

    
    return 0;
}