# 선물 기록 O -> 많이 준 사람이 하나 받음
# 기록 x or 선물 수 같음 -> 선물 지수 큰 사람이 받음
# 선물 지수: 준 선물 - 받은 선물
# 지수 같다면 주고받지 않음
def solution(friends, gifts):
    gift_idx = {name: 0 for name in friends}            # 선물 지수
    # 선물 테이블
    # gift_table[i][j] : i가 j에게 선물 준 횟수
    gift_table = [[0] * len(friends) for _ in range(len(friends))]
    
    for g in gifts:
        give, get = g.split()   # 준 사람, 받은 사람 분리
        idx_give = friends.index(give)  # 준 사람 idx
        idx_get = friends.index(get)    # 받은 사람 idx
        
        gift_table[idx_give][idx_get] +=1   # 선물 table update
        
        # 선물 지수 update
        gift_idx[give] += 1
        gift_idx[get] -= 1
        
    present = [0] * len(friends)
    for i in range(len(friends)):
        for j in range(len(friends)):
            # 예외 조건
            if i == j:
                continue
                
            if gift_table[i][j] > gift_table[j][i]: # 주고 받은 횟수 다름
                present[i] += 1
            elif gift_table[i][j] == gift_table[j][i]: # 횟수 같은 경우 지수 비교
                if gift_idx[friends[i]] > gift_idx[friends[j]]:
                    present[i] += 1
    
    return max(present)