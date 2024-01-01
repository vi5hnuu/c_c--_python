import json

lst=[10,20,30,40,50,60,70,80,90]
dct={'vishnu':30,'krishan':20}
tpl=('vishnu',10,20)

str1=json.dumps(lst)
str2=json.dumps(dct)
str3=json.dumps(tpl)
print(str1)
print(str1[0])
print(str2)
print(str3)
x=json.loads(str1)
xx=json.loads(str1)
y=json.loads(str2)
z=json.loads(str3)
print(x)
print(xx[0])
print(y)
print(z)