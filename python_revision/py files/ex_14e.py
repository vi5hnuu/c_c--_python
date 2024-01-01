def palindrome(lst,i=0,j=0):
    if i==0:
        j=len(lst)-1
    if(i<j):
        if (lst[i]==lst[j]) :
            i+=1
            j-=1
            return palindrome(lst,i,j)
        else:
            return False
    return True
print(palindrome('monm'))
