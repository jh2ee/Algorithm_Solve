def solution(answers):
    a1 = a2 = a3 = 0
    # 수포자의 답안 최소 반복 배열
    m1 = [1,2,3,4,5]
    m2 = [2,1,2,3,2,4,2,5]
    m3 = [3,3,1,1,2,2,4,4,5,5]
    n_questions = len(answers) # 문제수
    
    # 문제수보다 답안 배열이 길도록 조정
    m1 = m1 * (n_questions // len(m1) + 1) 
    m2 = m2 * (n_questions // len(m2) + 1) 
    m3 = m3 * (n_questions // len(m3) + 1) 
    
    for idx, ans in enumerate(answers):
        if ans == m1[idx]:
            a1 +=1
        if ans == m2[idx]:
            a2 +=1
        if ans == m3[idx]:
            a3 +=1
            
    ans_max = max(a1, a2, a3)
    answer = []
    
    if a1 == ans_max:
        answer.append(1)
    if a2 == ans_max:
        answer.append(2)
    if a3 == ans_max:
        answer.append(3)
    
    
    return answer