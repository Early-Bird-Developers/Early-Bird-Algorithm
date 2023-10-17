#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> result;
int n, m;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1, false);
    
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }
    
    int max_hack_count = 0;
    
    for (int i = 1; i <= n; ++i) {
        fill(visited.begin(), visited.end(), false);
        dfs(i);
        int hack_count = count(visited.begin(), visited.end(), true);
        if (hack_count > max_hack_count) {
            max_hack_count = hack_count;
            result.clear();
            result.push_back(i);
        } else if (hack_count == max_hack_count) {
            result.push_back(i);
        }
    }
    
    for (int computer : result) {
        cout << computer << " ";
    }
    
    return 0;
}
