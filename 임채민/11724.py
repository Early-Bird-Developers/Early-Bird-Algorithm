import sys
sys.setrecursionlimit(10000)
input = sys.stdin.readline

n, m = map(int, input().split())
A = [[] for _ in range(n+1)]    
visited = [False] * (n+1)  # 방문 리스트 초기화

def DFS(v):
    visited[v] = True  # 방문한 노드 처리 
    for i in A[v]:
        if not visited[i]:
            DFS(i)
            
# 양방향 에지 연결 작업
for _ in range(m):
    s, e = map(int, input().split())
    A[s].append(e)
    A[e].append(s)

count = 0

for i in range(1, n+1):
    if not visited[i]:
        count += 1
        DFS(i)
        
print(count)
