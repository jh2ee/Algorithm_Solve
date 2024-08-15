def solution(board, h, w):
    answer = 0
    # 좌-상-우-하 순 : 시계방향 회전
    dw = [-1, 0, 1, 0]
    dh = [0, 1, 0, -1]
    
    # 기준 색
    color = board[h][w]
    
    for i in range(0,4):
        wcheck = w + dw[i]
        hcheck = h + dh[i]
        
        if 0 <= wcheck < len(board) and 0<= hcheck < len(board):
            if board[h][w] == board[hcheck][wcheck]:
                answer += 1
            
    return answer