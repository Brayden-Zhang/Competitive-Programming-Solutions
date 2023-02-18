plainText = input()
cipher1 = input()
cipher2 = input()
answer = ""
letters = {'A': None, 'B': None, 'C': None, 'D':None, 'E': None, 'F': None, 'G': None, 'H': None, 'I':None, 'J':None, 'K':None, 'L':None, 'M':None, 'N':None, 'O':None, 'P':None, 'Q':None, 'R':None, 'S':None, 'T':None, 'U':None, 'V':None, 'W':None, 'X':None, 'Y':None, 'Z':None, ' ':None}
for i in range (len(plainText)):
    letters[cipher1[i]] = plainText[i]
for y in cipher2:
  if y in cipher1:
    answer += letters[y]
  else:
    answer += '.'
    
print(answer)
