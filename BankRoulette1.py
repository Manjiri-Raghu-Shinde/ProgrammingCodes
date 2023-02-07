# Import the random module here
import random
# Split string method
names_string = input("Give me everybody's names, separated by a comma. ")
names = names_string.split(", ")

peraon_who_will_pay=random.choice(names) #choice func 
print(peraon_who_will_pay+" is going to buy the meal today!")
