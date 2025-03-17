def solution(my_string, queries):
    my_string_list = list(my_string)
    for s, e in queries:
        my_string_list[s:e+1] = my_string_list[s:e+1][::-1]
        
    return ''.join(my_string_list)