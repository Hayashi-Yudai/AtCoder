s = list(input())
set_s = set(s)
if len(set_s) != 2:
  print("No")
else:
  if(s.count(list(set_s)[1]) == 2 and s.count(list(set_s)[1]) == 2):
    print("Yes")
  else:
    print("No")
