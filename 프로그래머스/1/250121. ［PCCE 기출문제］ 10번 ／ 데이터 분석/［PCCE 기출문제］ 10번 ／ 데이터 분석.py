def solution(data, ext, val_ext, sort_by):
    # data[i] = [code, date=yyyymmdd, maximum, remain]
    dict = {'code':0, 'date':1, 'maximum':2, 'remain':3}
    ext = dict[ext] # ext code 생성
    sort_by = dict[sort_by]
    
    # ext < val_ext 인 데이터
    extracted = []
    for i in range(len(data)):
        if data[i][ext] < val_ext:
            extracted.append(data[i])
            
    # sort_by 값 기준 오름차순 정렬
    extracted.sort(key=lambda x:x[sort_by])
    
    return extracted