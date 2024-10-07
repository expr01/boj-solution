n = int(input())
size = list(map(int, input().split()))
t, p = map(int, input().split())

resultT = 0
resultP = n // p
remainP = n % p

for i in size:
  if (i % t == 0):
    resultT += i // t
  elif (i != 0 and i % t != 0):
    resultT += i // t + 1

print(resultT)
print(resultP, remainP)