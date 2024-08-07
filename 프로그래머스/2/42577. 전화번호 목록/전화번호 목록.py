def solution(phone_book):
    # 딕셔너리 선언
    d = {}
    for i, n in enumerate(phone_book):
        d[n] = 1
        
    for numbers in phone_book:
        number = ''
        for n in numbers:
            number += n
            if number in d and number != numbers:
                return False
    
    return True