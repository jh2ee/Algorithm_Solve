from collections import deque

def solution(arr):
    answer = deque()
    
    for idx, a in enumerate(arr):
        if idx == 0:
            answer.append(a)
            last_number = a
            continue
        
        if a == last_number:
            continue
        else:
            answer.append(a)
            last_number = a
    
    return list(answer)