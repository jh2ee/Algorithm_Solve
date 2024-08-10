from collections import deque

def solution(priorities, location):
    # dq 원소 : (priority, idx)
    dq = deque([(priority, idx) for idx, priority in enumerate(priorities)])
    answer = 0
    
    while dq:
        top = dq.popleft()
        
        if any(top[0] < item[0] for item in dq): # 우선순위 비교
            dq.append(top)
        else:
            answer += 1
            if top[1] == location:
                return answer
        
    return answer