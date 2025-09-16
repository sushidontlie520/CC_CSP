# CC 6th functions notes

import random

def welcome():
    name = input("What is your name?")
    print(f"hello{name})") 
    #make sure to indent after a colon before typing anything else

print("The function is over!!")     

#calling all functuons
welcome()
welcome()
welcome() 
welcome()
welcome()

def add(number):
    print(number + num2)

num1 = 12 
num2 = 14
#add(num1, num2) #Arguements are given when we call the function
#add(4,8)
#add(9, 700) 
#(87, 45)

def clean(info): 
    return info. strip(). lower()

name = input("What is your name?")
quest = input("What is your quest?")
color = input("What is your favorite color?")

print(f"Hello {clean(name)}, your quest seems so exciting! {clean(quest)} don't worry I remembered your favorite color is {clean(color)}.") 

def believe(sentence): 
    length = len(sentence)
    spot_one = random.randint(0, length -1)
    spot_two = random.randint(0, length -1) 
    spot_three = random.randint(0, length -1) 
    full_sentence = sentence.split()
    full_sentence.insert(spot_one, "Believe it!")
    full_sentence.insert(spot_two, "Believe it!") 
    full_sentence.insert(spot_three, "Believe it!") 
    sentence = "".join(full_sentence) 
    return sentence 
