word = input()

for i in range(ord('a'), ord('z') + 1):
  w = chr(i)
  print(word.find(w), end=" ")