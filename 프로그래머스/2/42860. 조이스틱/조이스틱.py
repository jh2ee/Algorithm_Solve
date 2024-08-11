def solution(name):
    answer = 0
    min_move = len(name) - 1 # 횡이동
    
    for i,s in enumerate(name):
        answer += min(ord(s)-65, 91-ord(s))
        
        n = i+1
        while n < len(name) and name[n] == 'A':
            n += 1
        
        min_move = min(min_move, 2*i + len(name) - n, i + 2 * (len(name) -n))
    
    return answer + min_move