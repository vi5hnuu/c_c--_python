names=['vishnu','krishan','laxmi','manisha','pooja','parkash']
f=open('students.txt','w+')
for studentname in names:
    f.write(studentname+'\n')
num=int(input('Enter the student number :'))
f.seek(0,0)
i=1
while i<num:
    data=f.readline()
    i+=1
data=f.readline()
print('num=',num,'Name ',data)
f.close()