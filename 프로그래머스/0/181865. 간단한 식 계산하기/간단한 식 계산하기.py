def solution(binomial):
    answer = 0
    binomial_list = binomial.split()
    if binomial_list[1] == '+':
        return int(binomial_list[0]) + int(binomial_list[2])
    elif binomial_list[1] == '-':
        return int(binomial_list[0]) - int(binomial_list[2])
    elif binomial_list[1] == '*':
        return int(binomial_list[0]) * int(binomial_list[2])