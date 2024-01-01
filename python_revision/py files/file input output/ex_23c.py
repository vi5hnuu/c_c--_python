import operator
f=open('students.txt','r')
dct={}
while True:
    data=f.readline()
    if data=='':
        break
    stud=data.split(':')
    dct[stud[0]]=stud[1][0:2]
f.close()
print(dct)
lst=sorted(dct.items(),key=operator.itemgetter(0))
for x in lst:
    print(x)