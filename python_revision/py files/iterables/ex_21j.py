lst=[(10,20,30),(150.55,145.60,157.65),('A1','B1','C1')]
# l=[x for x in zip(lst[0],lst[1],lst[2])]
# print(l)

# l=[x for x in zip(*lst)]
# print(l)
xx=[]
for x in zip(*lst):
    xx.append(x)
print(xx)