def solution(a, b, c, d):
    dice = [a, b, c, d]
    
    counts = {x : 0 for x in range(1, 7)}
    for num in dice:
        counts[num] += 1
        
    if 4 in counts.values():
        return 1111 * dice[0]
    
    elif 3 in counts.values():
        p = [key for key, value in counts.items() if value == 3][0]
        q = [key for key, value in counts.items() if value == 1][0]
        return (10 * p + q) ** 2
    
    elif list(counts.values()).count(2) == 2:
        p, q = [key for key, value in counts.items() if value == 2]
        return (p + q) * abs(p - q)
    
    
    elif 2 in counts.values() and list(counts.values()).count(1) == 2:
        p = [key for key, value in counts.items() if value == 2][0]
        q, r = [key for key, value in counts.items() if value == 1]
        return q * r
        
    else:
        return min(dice)
