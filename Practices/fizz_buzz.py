#CC 6th FizzBuzz

y= 1 

while y < 51: 
    if y % 3 == 0: 
        print("Fizz")
    elif y % 5 == 0: 
        print("Buzz") 
    elif y % 3 == 0 and y %5 == 0: 
        print("FizzBuzz") 
    else:
        print(y) 
    y += 1 