
answer = 0
def solution(numbers, target):    
    
    n = len(numbers)
    
    def dfs(index, result): # 현재값, 결과값?
        if index == n: # numbers 모두 탐색 경우
            if result == target: # 탐색 결과 target과 같은 경우 answer+=1
                global answer
                answer += 1
            return
        else: # 탐색하는 경우
            dfs(index + 1, result + numbers[index])
            dfs(index + 1, result - numbers[index])

    dfs(0, 0) # numbers[0]부터 탐색
    
    return answer