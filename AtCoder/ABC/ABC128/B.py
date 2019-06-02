n =  int(input())

table = []
for i in range(n):
  city, score = input().split()
  score = int(score)

  table.append([i+1, city, score])

sorted_table = sorted(table, key=lambda x:(x[1], -x[2]))

print(sorted_table)
for i in range(n):
  print(sorted_table[i][0])