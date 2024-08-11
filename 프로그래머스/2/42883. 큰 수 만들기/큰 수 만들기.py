from collections import deque

def solution(number, k):
    dq = deque()
    answer = ''
    
    for idx, num in enumerate(number):
        while dq and k>0 and dq[-1] < num:
            dq.pop()
            k -= 1
        dq.append(num)
    while k > 0:
        dq.pop()
        k -= 1
    
    # deque에 있는 숫자를 모두 합쳐서 결과 반환
    answer = ''.join(dq)
    
    return answer