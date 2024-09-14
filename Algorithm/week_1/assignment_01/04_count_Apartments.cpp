#include <bits/stdc++.h>
using namespace std;

int dX[] = {-1, 1, 0, 0};
int dY[] = {0, 0, -1, 1};


bool valid(int a, int b, vector< vector< char > >& grid, int row, int col) {
    if (a >= 0 && a < row && b >= 0 && b < col && grid[a][b] == '.' ) 
        return true;
    else 
        return false;
}


void dfs(int si, int sj, vector< vector<bool> >& visited, vector< vector<char> >& grid, int n, int m) {
    visited[si][sj] = true;
    
    for (int i = 0; i < 4; i++) {
        int ci = si + dx[i];
        int cj = sj + dy[i];
        
        if (valid(ci, cj, grid, n, m) && !visited[ci][cj]) {
            dfs(ci, cj, visited, grid, n, m);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int row, col;
    int count = 0;
    cin >> row >> col;

    
    vector< vector< char > > grid(row, vector< char >(col));
    vector< vector< bool > > visited(row, vector< bool >(col, false));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> grid[i][j];
        }
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == '.' && visited[i][j]==false) {
                dfs(i, j, visited, grid, row, col);
                count++;  
            }
        }
    }

    
    cout << count << endl;
    
    return 0;
}
