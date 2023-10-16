#include <iostream>
#include <vector>
using namespace std;

static vector<vector<int>> A;    // 인접리스트 A
static vector<bool> visited;    // 방문 리스트 
static bool arrive;     // 도착 판별 변수
void DFS(int now, int depth);    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    arrive = false;
    cin >> n >> m;    
    A.resize(n);
    visited = vector<bool>(n, false);
    
    // m만큼 입력받기
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    
    // n 횟수만큼 DFS 실행
    for (int i = 0; i < n; i++) {
        DFS(i, 1);
        if (arrive) {
            break;
        }
    }
    
    if (arrive) {
        cout << 1 << "\n";
    }
    else {
        cout << 0 << "\n";
    }
}

// DFS 구현
void DFS(int now, int depth) {
    if (depth == 5 || arrive) {        // 깊이가 5면 프로그램 종료
        arrive = true;
        return;
    }
    visited[now] = true;    // 현재 노드 방문 기록
    
    // 현재 노드의 연결 노드 방문
    for (int i : A[now]) {    
        if (!visited[i]) {    // 방문하지 않은 노드에 대해 DFS 실행 
            DFS(i, depth + 1);    // 재귀호출 할때마다 1씩 증가
        }
    }
    visited[now] = false;    // 방문했던 현재 노드 정보 삭제
}
