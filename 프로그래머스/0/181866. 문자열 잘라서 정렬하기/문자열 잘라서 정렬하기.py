def solution(myString):
    answer = []
    split_list = myString.split('x')
    for s in split_list:
        if s != '':
            answer.append(s)
        answer.sort()
    return answer
        