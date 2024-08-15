from collections import deque

def solution(bandage, health, attacks):
    answer = health
    dq = deque(attacks)
    continued = 0
    
    for time in range(1, attacks[-1][0]+1):
        # 공격하는 경우
        if dq[0][0] == time:
            continued = 0
            answer -= dq[0][1] # 체력 감소
            dq.popleft()
            if answer <= 0: # 죽은 경우
                return -1
            
        # 회복하는 경우
        else:
            continued += 1
            if continued >= bandage[0]: # 초과 회복 여부
                answer += bandage[2]
                continued = 0
            
            answer += bandage[1]
                
            if answer > health:
                answer = health
        
    return answer