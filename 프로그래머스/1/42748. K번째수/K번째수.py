def solution(array, commands):
    answer = []
    for idx in range(0,len(commands)):
        i = commands[idx][0]
        j = commands[idx][1]
        k = commands[idx][2]
        new_arr = sorted(array[i-1:j])
        answer.append(new_arr[k-1])

    return answer