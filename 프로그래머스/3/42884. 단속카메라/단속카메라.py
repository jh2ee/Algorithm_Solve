def solution(routes):
    routes.sort(key = lambda x:x[1]) # 진출 지점 기준으로 정렬
    
    # 카메라 초기 위치 지정
    camera = routes[0][1]
    answer = 1
    
    for i in range(1, len(routes)):
        if camera < routes[i][0]:
            camera = routes[i][1]
            answer += 1
    
    return answer