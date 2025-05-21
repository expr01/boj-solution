def solution(numer1, denom1, numer2, denom2):
    numer = numer1 * denom2 + numer2 * denom1
    denom = denom1 * denom2
    
    a, b = numer, denom
    while b:
        a, b = b, a % b
        
    gcd = a
    
    return [numer // gcd, denom // gcd]
    