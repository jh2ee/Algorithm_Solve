def solution(number, k):
    stack = []
    
    for idx, num in enumerate(number):
        while stack and k and stack[-1] < num:
            stack.pop()
            k -= 1
        stack.append(num)
    
    while k > 0:
        stack.pop()
        k -= 1
    
    return ''.join(stack)