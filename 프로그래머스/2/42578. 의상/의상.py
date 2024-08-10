def solution(clothes):
    d = {}
    answer = 1
    
    for item, category in clothes:
        if category in d:
            d[category] += 1
        else:
            d[category] = 1
            
    for i in d.values():
        answer *= i+1
    
    
    return answer-1