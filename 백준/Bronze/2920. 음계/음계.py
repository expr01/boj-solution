scale = list(map(int, input().split()))

if (scale[0] != 1 and scale[0] != 8):
  print("mixed")
else:
  isOne = True
  for i in range(0, len(scale) - 1):
    if (abs(scale[i+1] - scale[i]) != 1):
      print("mixed")
      isOne = False
      break

  if (isOne and scale[0] == 1):
    print("ascending")

  if (isOne and scale[0] == 8):
    print("descending")