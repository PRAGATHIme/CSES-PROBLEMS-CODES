#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000;
int n, m;
vector<string> grid;
vector<vector<bool>> visited;

void dfs(int x, int y) {
    
    if (x < 0 || x >= n || y < 0 || y >= m) return;
    if (grid[x][y] == '#' || visited[x][y]) return;

    visited[x][y] = true;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int roomCount = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                dfs(i, j);
                ++roomCount;
            }
        }
    }

    cout << roomCount << endl;

    return 0;
}
