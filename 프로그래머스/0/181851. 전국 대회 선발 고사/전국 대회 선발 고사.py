def solution(rank, attendance):
    rank_dic = {}
    for i in range(len(rank)):
        if attendance[i] != 0:
            rank_dic[rank[i]] = i # 등수:번호
    sorted_values = [value for key, value in sorted(rank_dic.items())]
    a, b, c = sorted_values[:3]
    return 10000 * a + 100 * b + c