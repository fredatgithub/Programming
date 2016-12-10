import random

people  = random.randrange(0, 100)
cats = random.randrange(0, 100)
dogs  = random.randrange(0, 100)

if people < cats:
    print("Too many cats! The world is doomed!")

if people > cats:
    print("Not too many cats! The world is safe!")

if people < dogs:
    print("The world is being drooled on!")

if people > dogs:
    print("The world is safe and dry!")

dogs += 5

if people > dogs:
    print("People are greater than dogs.")
elif people < dogs:
    print("People are less than dogs.")
elif people == dogs:
    print("There are an even number of dogs and people.")