# BFS
from collections import deque
def solution(maps):
    maxh = len(maps) - 1
    maxw = len(maps[0]) - 1
    dh, dw = [0,1,0,-1], [-1,0,1,0] # 좌상우하
    
    q = deque()
    q.append((0,0))
    while q:
        h, w = q.popleft()
        for i in range(4):
            nh = h + dh[i]
            nw = w + dw[i]

            if nh < 0 or nh > maxh or nw < 0 or nw > maxw:
                continue
            if maps[nh][nw] == 0:
                continue
            if maps[nh][nw] == 1:
                maps[nh][nw] = maps[h][w] + 1
                q.append((nh,nw))

    if maps[maxh][maxw] == 1:
        return -1
    else:
        return maps[maxh][maxw]