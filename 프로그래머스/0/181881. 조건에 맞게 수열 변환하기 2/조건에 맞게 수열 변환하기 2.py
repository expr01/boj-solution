def solution(arr):
    count = 0
    
    while True:
        nextArr = []
        for i in arr:
            if i >= 50 and i % 2 == 0:
                nextArr.append(i // 2)
            elif i < 50 and i % 2 != 0:
                nextArr.append(i * 2 + 1)
            else:
                nextArr.append(i)
        if arr == nextArr:
            break
        arr = nextArr
        count += 1
    return count