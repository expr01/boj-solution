def solution(strArr):
    answer = 0
    lengths = [len(s) for s in strArr] # 각 단어의 길이
    unique_lengths = list(set(lengths))
    for unique_length in unique_lengths:
        count = 0
        for length in lengths:
            if unique_length == length:
                count += 1
        if count > answer:
            answer = count
    return answer