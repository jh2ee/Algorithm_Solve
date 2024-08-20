# 빵1 – 야채2 – 고기3 - 빵1
from collections import deque
def solution(ingredient):
    answer = 0
    dq = deque()
    for i in ingredient:
        dq.append(i)
        if len(dq) >= 4 and i == 1:
            if dq[-2] == 3 and dq[-3] == 2 and dq[-4] == 1:
                for i in range(4):
                    dq.pop()
                answer += 1
    return answer