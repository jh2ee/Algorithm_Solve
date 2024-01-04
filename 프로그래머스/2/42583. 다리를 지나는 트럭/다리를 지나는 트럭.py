from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 0
    
    trucks = deque(truck_weights)
    bridge = deque([0] * bridge_length) # 다리를 큐로 표현
    total_weight = 0
    
    while trucks:
        answer += 1
        total_weight -= bridge.popleft() # 현재 다리 위에 있는 트럭의 무게 갱신
        
        if total_weight + trucks[0] <= weight:
            total_weight += trucks[0]
            bridge.append(trucks.popleft())
        else:
            bridge.append(0)
    
    answer += bridge_length
    
    return answer