import heapq

def solution(scoville, K):
    answer = 0
    scoville_heap = []
    
    for food in scoville:
        heapq.heappush(scoville_heap, food)
    
    while scoville_heap[0] < K:
        heapq.heappush(scoville_heap, heapq.heappop(scoville_heap) + heapq.heappop(scoville_heap) * 2)
        answer += 1
        if len(scoville_heap) == 1:
            break
        
        
    if scoville_heap[0] < K:
        answer = -1
    
    return answer