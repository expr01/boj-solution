def solution(arr, queries):
    tmp = list(arr)
    for s, e, k in queries:
        for i in range(s, e+1):
            if i % k == 0:
                tmp[i] += 1
                print(tmp)
    return tmp