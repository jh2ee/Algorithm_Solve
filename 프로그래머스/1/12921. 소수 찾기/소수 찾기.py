import math
def isPrime(n):
    sqrt = int(math.sqrt(n))
    for i in range(2, sqrt+1):
        if n % i == 0:
            return False
    return True

def solution(n):
    answer = 0
    for i in range(2, n+1):
        if isPrime(i) == True:
            answer += 1
    return answer