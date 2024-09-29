testCase = int(input())

for i in range(testCase):
  input_list = input().split()

  num = int(input_list[0])
  word_list = list(input_list[1])

  for j in word_list:
    print(j * num, end="")
  print()