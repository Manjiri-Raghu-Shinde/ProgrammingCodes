print("welcome to the bmi calculato 2.0")
height = float(input("enter your height in m: "))
weight = float(input("enter your weight in kg: "))

oldbmi=weight/(height ** 2)
bmi=round(oldbmi)
if(bmi<18.5):
    print("Your BMI is "+str(bmi)+", you are underweight.")
elif(18.5<bmi<25):
    print("Your BMI is "+str(bmi)+", you have a normal weight.")
elif(25<bmi<30):
    print("Your BMI is "+str(bmi)+", you are slightly overweight.")
elif(30<bmi<35):
    print("Your BMI is "+str(bmi)+", you are obese.")
else:
    print("Your BMI is "+str(bmi)+", you are clinically obese.")