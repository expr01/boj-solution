theGreaterCommonDivisor = 1
leastCommonMultiple = 1

# Count를 증가시키면서 둘다 한 번에 나누어 떨어지는 수를 찾고 찾으면 그 값으로 계산
divisibleCount = 2

a, b = map(int, input().split())
while (divisibleCount <= max(a, b)):
  if (a % divisibleCount == 0 and b % divisibleCount == 0):
    a //= divisibleCount
    b //= divisibleCount
    theGreaterCommonDivisor *= divisibleCount
  else:
    divisibleCount += 1

  leastCommonMultiple = theGreaterCommonDivisor * a * b
  
print(theGreaterCommonDivisor)
print(leastCommonMultiple)