import operator

marks={'subu':{'maths':88,'eng':60,'sst':95},
       'amol':{'maths':78,'eng':68,'sst':89},
       'rama':{'maths':68,'eng':66,'sst':87},
       'raka':{'maths':56,'eng':66,'sst':77}}

print('Marks of amol in english :',marks['amol']['eng'])
marks['rama']['maths']=77
print(marks)
marks=dict(sorted(marks.items(),key=operator.itemgetter(0)))
# marks=(sorted(marks.items(),key=operator.itemgetter(0)))
print(marks)