def solution(num_list):
    odd_sum = 0
    even_sum = 0
    for i in range(len(num_list)):
        if i % 2 == 0:
            even_sum += num_list[i]
        else:
            odd_sum += num_list[i]
    
    return max(odd_sum, even_sum)