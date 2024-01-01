lstnames=['vishnu','krishan','laxmi']
marks=[10,20,30]
d={k:v for (k,v) in zip(lstnames,marks)}
print(d)

m=zip(lstnames,marks)
# print(list(m))
dic=dict(m)
print(dic)