s = input()
fir = int(s[:2])
sec = int(s[2:])

if (0 < fir <= 12 and 0 < sec <= 12):
  print('AMBIGUOUS')
elif ((fir == 0 or fir > 12)  and 0 < sec <= 12):
  print('YYMM')
elif (0 < fir <= 12 and (sec == 0 or sec > 12)):
  print('MMYY')
else:
  print('NA')