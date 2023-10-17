from collections import deque

# 미로 정보와 미로의 크기 입력받기 
n, m = map(int, input().split())
maze = [list(map(int, input())) for _ in range(n)]

# BFS
def BFS(maze, n, m):
    # 상하좌우 이동을 표현하는 dx, dy
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    # BFS를 수행하기 위한 큐 튜플 (x, y, distance)
    queue = deque([(0, 0, 1)])
    maze[0][0] = 0 # 출발 지점은 방문 표시
    
    # 큐가 비어 있을 때까지 반복
    while queue:
        x, y, distance = queue.popleft() # 큐에서 값 꺼내기
        
        # 만약 현재 위치가 도착 지점에 도달했다면 최단 거리 반환
        if x == n - 1 and y == m - 1:
            return distance
        
        for i in range(4):      # 현재 위치에서 상하좌우 확인
            nx, ny = x + dx[i], y + dy[i]  # 상하좌우로 이동한 새로운 위치 계산 
            if 0 <= nx < n and 0 <= ny < m and maze[nx][ny] == 1:
                queue.append((nx, ny, distance + 1))
                maze[nx][ny] = 0 # 방문한 지점 표시
                
result = BFS(maze, n, m)
print(result)
