def solution(n_str):
    i = 0
    while n_str[i] == '0':
        i += 1
    return n_str[i:]