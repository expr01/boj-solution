while True:
  num = list(map(int, input()))
  if (num[0] == 0): break
  isPalindrome = True
  for i in range(0, len(num) // 2):
    if (num[i] != num[-(i+1)]):
      isPalindrome = False
      break

  if (isPalindrome):
    print("yes")
  else:
    print("no")