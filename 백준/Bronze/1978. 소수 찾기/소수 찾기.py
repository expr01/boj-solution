n = int(input())
num_list = list(map(int, input().split()))
count = 0

for num in num_list:
  if (num < 2): continue
  isPrime = True
  for i in range(2, num):
    if (num % i == 0):
      isPrime = False
      break
    
  if (isPrime): count += 1
print(count)