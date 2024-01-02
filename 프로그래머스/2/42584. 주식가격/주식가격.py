from collections import deque

def solution(prices):
    answer = []
    queue = deque(prices) # 입력 list를 queue로 변환
    
    while queue: # 큐 순회
        price = queue.popleft() # 큐의 첫 원소부터 정답 구함
        time = 0
        for i in queue:
            time += 1
            if price > i:
                break
        answer.append(time)
    
    return answer