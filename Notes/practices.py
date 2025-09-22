#CC 6th Time and for loops notes!

import datetime

current = datetime.datetime.now()
hour = current.hour

#print(f"the time in seconds since jan 1, 1970: {eopch}")")
print(f"the current time is: {current}")
print(f"The hour is: {hour}") 

#lists

siblings = ["Sophie", "Sophe", "sophiee", ["Phofie"]]

print(siblings[3])
print(siblings)

#For loop
#Goes until there's no more to operate it into
for sibling in siblings: 
    #print(f"Hello {sibling}")
    print(f"Hello {sibling}") 

for x in range(20,1, -1): 
    print(x) 

i = 1
while i < 21:
    print(i) 
    i += 2 #counting up from 1 by 2 up to 20
X = 1 
while X< 21:
    if X% 2 == 0:
        print(f"{X} is even") 
    else:
        print(f"{X} is odd") 
    X+=1 

import random

number = random.randint(1,20)
y = 1
"""while X != number: 
    print("Duck")
    X +=1 

print("Goose!") """

while True: 
    if number == y:
        print("GOOSE!") 
        break 
    else:
        print("Duck") 
        y+= 1 