numOfCard, CardNum = map(int, input().split())
cardNumList = list(map(int, input().split()))
answer = 0

for i in range(0, numOfCard - 2):
  sum = 0
  for j in range(i+1, numOfCard - 1):
    for k in range(j + 1, numOfCard):
      sum = cardNumList[i] + cardNumList[j] + cardNumList[k]
      if (CardNum < sum):
        continue
      elif (answer < sum):
        answer = sum
print(answer)