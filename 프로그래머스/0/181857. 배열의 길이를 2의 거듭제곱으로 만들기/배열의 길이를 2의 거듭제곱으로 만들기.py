def solution(arr):
    answer = []
    max_length = 1
    while True:
        if len(arr) <= max_length: break
        max_length = max_length * 2
    answer = arr + [0] * (max_length - len(arr))
    return answer