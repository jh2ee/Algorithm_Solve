answer = 0

def solution(numbers, target):    
    
    n = len(numbers)
    
    def dfs(index, result):
        if index == n:
            if result == target:
                global answer 
                answer += 1
            return
        else:
            dfs(index + 1, result + numbers[index])
            dfs(index + 1, result - numbers[index])
    
    dfs(0, 0)
    
    return answer