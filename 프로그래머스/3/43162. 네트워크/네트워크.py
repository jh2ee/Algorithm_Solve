def solution(n, computers):
    answer = 0
    # 방문 여부 확인
    visited = [0 for i in range(n)]
    
    def dfs(node):
        visited[node] = 1
        for i in range(len(visited)):
            if computers[node][i] == 1 and not visited[i]:
                dfs(i)
        
    for i in range(n):
        if visited[i] == 0:
            dfs(i)
            answer += 1
    
    return answer