import sys
sys.setrecursionlimit(10000)
input = sys.stdin.readline

n = int(input())
m = int(input())
A = [[] for _ in range(n+1)]    # 그래프 초기화
visited = [0] * (n+1)

def DFS(v):
    visited[v] = 1    # 방문한 노드 
    for i in A[v]:
        if not visited[i]:
            DFS(i)
            
# 양방향 에지 연결
for _ in range(m):
    s, e = map(int, input().split())
    A[s].append(e)
    A[e].append(s)
    
# 1번 컴퓨터에 대해 깊이 우선 탐색     
DFS(1)
    
print(sum(visited)-1)
