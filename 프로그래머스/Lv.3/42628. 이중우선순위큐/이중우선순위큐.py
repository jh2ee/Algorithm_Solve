import heapq


def solution(operations):
    answer = []
    heap = []

    for operation in operations:
        op, num = operation.split()
        num = int(num)

        if op == 'I':
            heapq.heappush(heap, num)

        elif op == 'D':
            if len(heap) == 0:
                continue

            if num == 1:
                list(heap)
                max_value = max(heap)
                heap.remove(max_value)
                heapq.heapify(heap)
            else:  # num == -1 인 경우 최솟값 삭제
                heapq.heappop(heap)

    if len(heap) > 0:
        min_value = heap[0]
        list(heap)
        max_value = max(heap)
    else:
        min_value = max_value = 0

    answer.append(max_value)
    answer.append(min_value)

    return answer