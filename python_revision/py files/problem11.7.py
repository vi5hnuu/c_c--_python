d={'anuj':{'salary':10000,'age':20,'height':6},'aditya':{'salary':20000,'age':30,'height':7}}
lst=[]
for v in d.values():
    lst.append(v['salary'])
print(max(lst))