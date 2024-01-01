def sanitize(lst,i=0):
    if i!=(len(lst)):
        if lst[i]<0:
            lst[i]=0
        i+=1
        sanitize(lst,i)
    return lst

l=[2,5,-2,-6,3,-5,-7]
print(sanitize(l))
