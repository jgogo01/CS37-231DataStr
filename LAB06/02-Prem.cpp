#include <iostream>
#include <queue>

using namespace std;

bool ckMove(int x, int y, int n, const int grid[][100], bool visited[][100]) {
    return x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == 0 && !visited[x][y];
}

bool bfs(int n, const int grid[][100]) {
    bool visited[100][100] = {false};
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == n - 1 && y == n - 1) {
            return true;
        }

        visited[x][y] = true;

        int dx[] = {1, 0, 0, -1};
        int dy[] = {0, -1, 1, 0};

        for (int i = 0; i < 4; ++i) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (ckMove(newX, newY, n, grid, visited)) {
                q.push(make_pair(newX, newY));
            }
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    int grid[100][100];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    if (bfs(n, grid)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
