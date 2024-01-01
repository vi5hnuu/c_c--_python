lst1=['vishnu','krishan','laxmi','manisha']
lst2=['kumar','kumawat','kumari','kirodiwal']
lst=[]
for x,y in zip(lst1,lst2):
    lst.append(x+' '+y)
print(lst)