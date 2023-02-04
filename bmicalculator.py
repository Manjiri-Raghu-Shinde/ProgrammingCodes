height=input("enter your height: ")
weight=input("enter your weight: ")
new_height=float(height)
new_weight=int(weight)
bmi=new_weight/(new_height ** 2)
new_bmi=int(bmi)
print(bmi)#to avoid to many decimal points