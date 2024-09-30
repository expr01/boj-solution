remain_set = set()
for i in range(10):
  num = int(input())
  remain_set.add(num % 42)

print(len(remain_set))
