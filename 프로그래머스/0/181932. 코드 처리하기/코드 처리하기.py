def solution(code):
    ret = ""
    mode = 0
    for idx in range(0, len(code)):
        if mode == 0:
            if code[idx] != "1" and idx % 2 == 0:
                ret += code[idx]
            elif code[idx] == "1":
                mode = 1
                continue
            
        if mode == 1:
            if code[idx] != "1" and idx % 2 != 0:
                ret += code[idx]
            elif code[idx] == "1":
                mode = 0
                continue
                
    if not ret:
        ret = "EMPTY"
    return ret