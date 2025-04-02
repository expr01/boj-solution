def solution(strArr):
    answer = 0
    length_dic = {}
    for s in strArr:
        if len(s) in length_dic:
            length_dic[len(s)] += 1
        else:
            length_dic[len(s)] = 1
        
    if not length_dic:
        return 0
    return max(length_dic.values())