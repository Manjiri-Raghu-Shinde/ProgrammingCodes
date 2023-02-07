# 🚨 Don't change the code below 👇
student_scores = input("Input a list of student scores ").split()
for n in range(0, len(student_scores)):
  student_scores[n] = int(student_scores[n])
print(student_scores)
# 🚨 Don't change the code above 👆

#Write your code below this row 👇
iMax=student_scores[0]

for i in range(0, len(student_scores)):
    if(iMax<student_scores[i]):
        iMax=student_scores[i]
iMaxstr=str(iMax)
print("The highest score in the class is: "+iMaxstr)




