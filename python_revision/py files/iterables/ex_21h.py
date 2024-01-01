lst=[1,2,3,4,5,6]
n=len(lst)
s=sorted(lst)
m=(sum(s[n//2-1:n//2+1])/2.0,s[n//2])[n%2]
print(m)