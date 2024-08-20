def solution(id_list, report, k):
    answer = [0 for i in range(len(id_list))]
    is_reported = {id: 0 for id in id_list} # 신고 횟수 초기화
    report_whom = {id: set() for id in id_list} # key를 신고한 사람 value에 추가
        
    for r in report:
        user, reported = r.split() # 신고자와 신고 당한 사람 추출
        
        # 신고자가 해당 유저를 처음 신고하는 경우
        if user not in report_whom[reported]:
            report_whom[reported].add(user) # 신고 명단 update
            is_reported[reported] += 1 # 신고당한 횟수 update
            
    for key, value in is_reported.items():
        if value >= k: # 신고 k회 이상인 경우
            # 해당 인물을 신고한 사람 find, answer++
            for user in report_whom[key]:
                answer[id_list.index(user)] += 1
    
    return answer