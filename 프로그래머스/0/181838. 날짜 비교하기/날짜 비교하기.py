def solution(date1, date2):
    date1_str = ''
    date2_str = ''
    for i in range(3):
        date1_str += str(date1[i])
        date2_str += str(date2[i])
        
    return 1 if int(date1_str) < int(date2_str) else 0