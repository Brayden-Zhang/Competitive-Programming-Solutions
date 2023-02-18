cities = []
temps = []
lowesttemp = 1000

while True:
  city,temp = input().split()
  cities.append(city)
  temps.append(int(temp))
  if city == 'Waterloo':
    break
  
for i in range(len(temps)):
  if temps[i] < lowesttemp:
    lowesttemp = temps[i]
    index = i
    
print (cities[index])
