def solution(arr, queries):
    answer = []
    
    for s, e, k in queries:
        min_value = 1000001
        found = False
        for i in range(s, e+1):
            if arr[i] > k:
                found = True
                if arr[i] < min_value:
                    min_value = arr[i]
        
        answer.append(min_value if found else -1)
    return answer