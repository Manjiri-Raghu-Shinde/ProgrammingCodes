
student_heights = input("Input a list of student heights ").split()
for n in range(0, len(student_heights)):
  student_heights[n] = int(student_heights[n])

iSum=0
for i in student_heights:
    iSum=iSum+i;

average=round(iSum/len(student_heights))
print(average)



