lst=[1,2,3,4,5,-1,-2,-3,-4,-5]
if 0 not in lst:
    lst.append(0)
lst.sort()
pos=lst.index(0)
print('NUmber -ve ',pos)
print('NUmber +ve ',len(lst)-pos-1)