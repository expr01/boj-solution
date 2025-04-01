def solution(myStr):
    myStr = myStr.replace('b', 'a').replace('c', 'a').split('a')
    answer = []
    for s in myStr:
        if s != '':
            answer.append(s)
    if len(answer) == 0:
        return ["EMPTY"]
    else:
        return answer
            