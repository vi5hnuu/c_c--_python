qlist=['what is the capital of india','which is your favourite color']
alist=[['delhi','mumbai','hydrabad','bangalore'],['red','green','blue','orange']]
q=[]
for x in zip(qlist,alist):
    q.append([x[0],*x[1]])
print(q)