def solution(sizes): # sizes : 2차원 배열
    # 가장 긴 w, h에 지갑 사이즈 맞춤
    answer = 0
    wmax = 0
    hmax = 0
    for i in sizes:
        # i[0] > i[1] 이도록 설정, [w, h] = [i[0], i[1]]
        if i[0] < i[1]:
            i.sort(reverse=True)
        
        if wmax < i[0]:
            wmax = i[0]
        if hmax < i[1]:
            hmax = i[1]
            
    answer = wmax * hmax
    
    return answer