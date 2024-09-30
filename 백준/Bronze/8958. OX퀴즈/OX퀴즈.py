testCase = int(input())
for i in range(testCase):
  ox = list(input())
  num = 0
  score = 0
  for j in ox:
    if (j == 'O'):
      num += 1
      score += num
    elif (j == 'X'):
      num = 0
  print(score)