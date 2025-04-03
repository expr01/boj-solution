def solution(orders):
    answer = 0
    for order in orders:
        if "latte" in order:
            answer += 5000
        elif "americano" in order or "any" in order:
            answer += 4500
    return answer