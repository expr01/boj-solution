testCase = int(input())

for i in range(testCase):
  h, w, n = map(int, input().split())
  floor = n % h
  num = n//h+1

  if (floor == 0):
    floor = h
    num = n//h

  if(num >= 10):
    print(floor, num, sep='')
  else:
    print(floor, 0, num, sep='')
