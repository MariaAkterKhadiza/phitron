#include <bits/stdc++.h>
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

using namespace std;

int row, col;
char grid[1003][1003];
int visited[1003][1003]; 

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool valid(int a, int b) {
    
    if (a >= 0 && a < row && b >= 0 && b < col && (grid[a][b] == '.' || grid[a][b] == 'B')) 
        return true;
    else 
        return false;
}

bool bfs(int si, int sj, int di, int dj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();

        int a = par.first;
        int b = par.second;

        if (a == di && b == dj) {
            return true; // Found destination
        }

        for (int i = 0; i < 4; i++) {
            int ci = a + dx[i];
            int cj = b + dy[i];

            if (valid(ci, cj) && !visited[ci][cj]) {
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> row >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> grid[i][j];
        }
    }

    int si = -1, sj = -1, di = -1, dj = -1;
   
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == 'A') {
                si = i;
                sj = j;
                grid[i][j] = '.'; 
            }
            if (grid[i][j] == 'B') {
                di = i;
                dj = j;
                
            }
        }
    }

   
    memset(visited, false, sizeof(visited));

    
    bool canReach = bfs(si, sj, di, dj);

    if (canReach) YES;
    else NO;

    return 0;
}
