str = input()

for c in str:
    if c.isupper() == True: # 대문자라면
        print(c.lower(), end='')
    else:
        print(c.upper(), end='')