# kruscal 알고리즘

def solution(n, costs):
    answer = 0
    # cost 순으로 정렬
    costs.sort(key=lambda x:x[2])
    connection = set([costs[0][0]])
    
    while len(connection) != n:
        for cost in costs:
            # 사이클 형성 예외
            if cost[0] in connection and cost[1] in connection:
                continue
            # 기존 간선과 연결
            if cost[0] in connection or cost[1] in connection:
                connection.update([cost[0], cost[1]])
                answer += cost[2]
                break
    
    return answer