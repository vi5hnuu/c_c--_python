lst1=[1,-9,-6,-45,-78,-1,2,3,4,5]
lst2=[]
lst3=[]
for num in lst1:
    if num<0:
        lst2.append(num)
    else:
        lst3.append((num))
print(lst2)
print(lst3)