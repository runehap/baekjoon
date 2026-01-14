#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int map[52][52];
int visited[52][52];
int n, m;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

vector<pair<int, int>> lamps;

void bfs(vector<pair<int, int>>& blocks) {
    queue<pair<int, int>> q;

    for (auto p : blocks) {
        q.push({p.first, p.second});
        visited[p.first][p.second] = 15;
    }

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        int current_power = visited[cx][cy];
        
        if (current_power <= 0) continue;

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            int next_type = map[nx][ny];
            
            if (next_type == 0 || next_type == 3) continue;

            int next_power = 0;
            if (map[cx][cy] == 3) next_power = 15;
            else next_power = current_power - 1;
            
            if (next_type == 2) {
                if (visited[nx][ny] < next_power) {
                    visited[nx][ny] = next_power;
                }
                continue; 
            }

            if (visited[nx][ny] < next_power) {
                visited[nx][ny] = next_power;
                q.push({ nx, ny });
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    int k;
    cin >> k;

    vector<pair<int, int>> blocks;

    for (int i = 0; i < k; i++) {
        string type;
        int r, c;
        cin >> type >> r >> c;

        if (type == "redstone_block") {
            map[r][c] = 3;
            blocks.push_back({r, c});
        }
        else if (type == "redstone_dust") {
            map[r][c] = 1;
        }
        else if (type == "redstone_lamp") {
            map[r][c] = 2;
            lamps.push_back({r, c});
        }
    }

    bfs(blocks);

    bool success = true;
    for (auto lamp : lamps) {
        if (visited[lamp.first][lamp.second] <= 0) {
            success = false;
            break;
        }
    }

    if (success) cout << "success";
    else cout << "failed";

    return 0;
}