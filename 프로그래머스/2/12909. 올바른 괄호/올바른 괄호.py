from collections import deque

def solution(s):
    dq = deque()
    
    for a in s:
        if len(dq) == 0:
            dq.append(a)
        else:
            if dq[-1] == '(' and a == ')':
                dq.pop()
            else:
                dq.append(a)
            
    if len(dq) == 0:
        return True

    return False