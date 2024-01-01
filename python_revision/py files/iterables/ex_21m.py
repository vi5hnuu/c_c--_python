def getname(stud,mm):
    if stud[1]==mm:
        return stud[0]
lst=[('ajay',45),('sujay',55),('nirmal',40),('vijay',75)]
maxmarks=max(x[1] for x in lst)
for s in lst:
    name=getname(s,maxmarks)
print(name,maxmarks)