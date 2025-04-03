def solution(arr):
    answer = 0
    flag = True
    for i in range(len(arr)):
        for j in range(len(arr[0])):
            if arr[i][j] != arr[j][i]:
                flag = False
    return 1 if flag else 0