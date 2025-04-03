def solution(n):
    if n == 1 : return [[1]]
    arr = [[0 for _ in range(n)] for _ in range(n)]
    
    x, y = 0, 0
    direct = 'r'
    
    for i in range(0, n*n):
        arr[x][y] = i+1
        
        if direct == 'r':
            if y + 1 == n or arr[x][y + 1] != 0:
                direct = 'd'
                x += 1
            else:
                y += 1
        elif direct == 'd':
            if x + 1 == n or arr[x + 1][y] != 0:
                direct = 'l'
                y -= 1
            else:
                x += 1
        elif direct == 'l':
            if y - 1 < 0 or arr[x][y - 1] != 0:
                direct = 'u'
                x -= 1
            else:
                y -= 1
        elif direct == 'u':
            if x - 1 < 0 or arr[x - 1][y] != 0:
                direct = 'r'
                y += 1
            else:
                x -= 1
    return arr