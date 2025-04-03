def solution(picture, k):
    answer = []
    for i in range(len(picture)):
        pic_str = ''
        for j in range(len(picture[0])):
            pic_str += picture[i][j] * k
        answer += [pic_str] * k
            
    return answer