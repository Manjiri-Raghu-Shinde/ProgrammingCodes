print("Welcome to the rollercoaster.")
height=int(input("what is your height in cm?"))

if (height>=120):
    print("you cam ride the rollercoaster.")
    age=int(input("what is your age?"))
    if (age<=12):
        bill=5
        print(f"you have to pay {bill}$ ticket.")
    elif (12<age<=18):
        bill=7
        print(f"you have to pay {bill}$ ticket.")
    else:
        bill=7
        print(f"you have to pay {bill}$ ticket.")

    wantsPhoto=input("Do you want to a photo taken? Y or N??")

    if(wantsPhoto == "Y"):
        bill+=3
        
        print(f"Your final bill is ${bill}.")
    
else:
    print("Sorry, you cannot ride the rollercoaster.")