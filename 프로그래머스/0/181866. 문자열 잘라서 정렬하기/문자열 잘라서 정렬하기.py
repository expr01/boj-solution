def solution(myString):
    answer = sorted(myString.split('x'))
    for s in myString:
        if s == "": answer.remove("")
    return answer
        