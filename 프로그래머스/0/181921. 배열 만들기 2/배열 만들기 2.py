def solution(l, r):
    answer = []
    for num in range(l, r+1):
        str_num = str(num)
        is_valid = True
        for i in str_num:
            if i != '0' and i != '5':
                is_valid = False
                break
                
        if is_valid:
            answer.append(num)
    
    if not answer:
        return [-1]
    return answer