def solution(nums):
    N = len(nums) # 폰켓몬 수
    ans = [] # 서로 다른 폰켓몬 집합
    for p in nums:
        if p not in ans:
            ans.append(p)
    
    if len(ans) >= N/2:
        answer = N/2
    else:
        answer = len(ans)
        
    return answer