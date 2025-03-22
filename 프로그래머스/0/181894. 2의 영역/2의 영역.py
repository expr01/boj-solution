def solution(arr):
    index = []
    for i in range(len(arr)):
        if arr[i] == 2:
            index.append(i)
    
    if not index:
        return [-1]
    return arr[index[0]:index[-1]+1]