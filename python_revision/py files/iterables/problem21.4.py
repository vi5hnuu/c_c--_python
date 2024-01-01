names=['vishnu','krishan','laxmi','pooja','manisha','prakash']
age=[20,18,15,25,22,28]
salary=[122,123,124,125,125,129]
for x in zip(names,age,salary):
    print(x[0],x[1],x[2])
print(list(zip(names,age,salary)))
it=list(zip(names,age,salary))
n,a,s=zip(*it)
print(n)
print(a)
print(s)