students={'dipti':{'maths':48,'eng':60,'hindi':95},
          'smriti':{'maths':75,'eng':68,'hindi':89},
          'subodh':{'maths':45,'eng':66,'hindi':87}}

tot={}
topper_name=''
topper_marks=0
for name,info in students.items():
    total=0
    for sub,marks in info.items():
        total+=marks
    avg=int(total/3)
    students[name]={'total':total,'avg':avg}
    if avg>topper_marks:
        topper_name=name
        topper_marks=avg
print(students)
print(topper_name)
print(topper_marks)