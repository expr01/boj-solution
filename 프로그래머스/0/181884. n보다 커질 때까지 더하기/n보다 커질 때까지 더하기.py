def solution(numbers, n):
    sum = 0
    for i in range(0, len(numbers)):
        if sum > n:
            break
        sum += numbers[i]
    return sum