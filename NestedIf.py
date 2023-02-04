print("Welcome to the rollercoaster.")
height=int(input("what is your height in cm?"))

if (height>=120):
    print("you cam ride the rollercoaster.")
    age=int(input("what is your age?"))
    if (age<=12):
        print("you have to pay 5$ ticket.")
    elif (12<age<=18):
        print("you have to pay 7$ ticket.")
    else:
        print("you have to pay 12$ ticket.")
else:
    print("Sorry, you cannot ride the rollercoaster.")