
print("Welcome to the Love Calculator!")
name1 = input("What is your name? \n")
name2 = input("What is their name? \n")

combined_name=name1+name2
lowerName=combined_name.lower()

t=lowerName.count("t")
r=lowerName.count("r")
u=lowerName.count("u")
e=lowerName.count("e")

Score1=t+r+u+e

l=r=lowerName.count("l")
o=r=lowerName.count("o")
v=r=lowerName.count("v")
e=r=lowerName.count("e")

Score2=l+o+v+e
Score=str(Score1)+str(Score2)
combined_score=int(Score)
if(combined_score<10 or combined_score>90):
    print(f"Your score is {combined_score}, you go together like coke and mentos.")
elif(40<combined_score<50):
    print(f"Your score is {combined_score}, you are alright together.")
else:
    print(f"Your score is {combined_score}.")
