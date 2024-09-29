n, x = map(int, input().split())
answer = list(map(int, input().split()))

for i in answer:
  if (x > i):
    print(i, end=" ")
   