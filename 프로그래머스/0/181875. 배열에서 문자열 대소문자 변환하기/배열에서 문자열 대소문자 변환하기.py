def solution(strArr):
    answer = []
    for i in range(0, len(strArr)):
        answer.append(strArr[i].lower() if i % 2 == 0 else strArr[i].upper()) 
    return answer