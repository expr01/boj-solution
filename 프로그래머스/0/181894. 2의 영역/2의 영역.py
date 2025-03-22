def solution(arr):
    index = [i for i, value in enumerate(arr) if value == 2]
    if not index:
        return [-1]
    return arr[index[0]:index[-1]+1]