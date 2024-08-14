# dictionary?

def solution(name, yearning, photo):
    answer = []
    d={}
    for i in range(len(name)):      # dict 구성
        d[name[i]] = yearning[i]
        
    for people in photo:
        score = 0
        for person in people:
            if person in d:
                score += d[person]
        answer.append(score)
    
    return answer