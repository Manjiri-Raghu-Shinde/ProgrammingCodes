
age = input("What is your current age? ")
remaining_age=90-int(age)
num_of_months=int(remaining_age)*12
num_of_weeks=int(remaining_age)*52
num_of_days=int(remaining_age)*365

print(f"You have {num_of_days} days, {num_of_weeks} weeks, and {num_of_months} months left.")
