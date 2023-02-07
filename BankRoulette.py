# Import the random module here
import random
# Split string method
names_string = input("Give me everybody's names, separated by a comma. ")
names = names_string.split(", ")

Cnt=random.randint(0,len(names))
print(names[Cnt]+" is going to buy the meal today!")