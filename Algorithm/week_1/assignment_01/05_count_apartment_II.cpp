#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};


bool valid(int a, int b, vector< vector< char > >& grid, int row, int col) {
    return (a >= 0 && a < row && b >= 0 && b < col && grid[a][b] == '.');
}


int dfs(int si, int sj, vector< vector<bool> >& visited, vector< vector<char> >& grid, int n, int m) {
    visited[si][sj] = true;
    int roomCount = 1;

   
    for (int i = 0; i < 4; i++) {
        int ci = si + dx[i];
        int cj = sj + dy[i];

        
        if (valid(ci, cj, grid, n, m)  && visited[ci][cj]==false ) {
            roomCount += dfs(ci, cj, visited, grid, n, m); 
        }
    }
    return roomCount;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int row, col;
    cin >> row >> col;

    vector< vector< char > > grid(row, vector< char >(col));
    vector< vector< bool > > visited(row, vector< bool >(col, false));
    vector<int> room;

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> grid[i][j];
        }
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                int size = dfs(i, j, visited, grid, row, col);
                room.push_back(size);
            }
        }
    }

    
    if (room.empty()) {
        cout << 0 << endl;
    } else {
        
        sort(room.begin(), room.end());

        
        for(auto ele: room) cout << ele << " ";
        cout << endl;
    }

    return 0;
}
//pb-5