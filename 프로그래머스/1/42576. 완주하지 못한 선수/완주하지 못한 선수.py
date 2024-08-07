def solution(participant, completion):
    p = {}
    for man in participant:
        if man in p:
            p[man] += 1
        else:
            p[man] = 1
            
    for man in completion:
        p[man] -= 1
    
    for man in participant:
        if p[man] != 0:
            answer = man
    
    return answer