def solution(arr):
    stk = []
    i = 0
    while i < len(arr):
        if not stk:
            stk.append(arr[i])            
        else:
            if stk[-1] == arr[i]:
                stk.pop(-1)    
            elif stk[-1] != arr[i]:
                stk.append(arr[i])
        i += 1
    if not stk: return [-1]
    return stk
