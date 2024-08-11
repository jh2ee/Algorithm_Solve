from collections import deque

def solution(progresses, speeds):
    answer = []
    days = deque()
    
    for i, progress in enumerate(progresses):
        day = 0
        while progress < 100:
            day += 1
            progress += speeds[i]
        
        days.append(day)
        
    # 7 3 9
    while days:
        count = 1
        top = days.popleft()
        
        while days and days[0] <= top:
            count += 1
            days.popleft()
        
        answer.append(count)
    
    return answer