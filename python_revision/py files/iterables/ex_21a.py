lst=[x for x in range(18) if x%2!=0]
lst[2]=[2,8,12,16]
print(lst)
xlst=[]
for x in lst:
    if str(x).isdigit():
        xlst.append(x)
    else:
        xlst=xlst+x

print(xlst)
