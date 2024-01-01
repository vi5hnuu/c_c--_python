def create_list(l1,l2):
    l3=list(set(l1) & set(l2))
    return l3

lst1=[10,20,30,40,50]
lst2=[1,2,3,40,10]
lst3=create_list(lst1,lst2)
print(lst3)