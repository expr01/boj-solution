def solution(myString):
    answer = []
    count = 0
    for s in myString:
        if s == 'x':
            answer.append(count)
            count = 0
        else:
            count += 1
    answer.append(count)
    return answer
        
        
        
        