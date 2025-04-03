def solution(arr):
    row_len = len(arr[0])
    col_len = len(arr)
    if row_len > col_len:
        for _ in range(row_len - col_len):
            arr.append([0] * row_len)
    elif row_len < col_len:
        for i in range(col_len):
            for _ in range(col_len - row_len):
                arr[i].append(0)
    else: return arr
    return arr