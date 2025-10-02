#CC 6th Time of Day

time = int(input("What is the time now in the 24 hour format?"))

if time >=0 and time<12:
    print("Good Morning!")
elif time <=17 and time>=12:
    print("Good Afternoon!")
elif time >17 and time<24:
    print("Good Evening!")
else:
    print("You got school in the morning, GO TO BEDD!!")
