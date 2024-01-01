# x=input('Enter binary notation :')
# c=len(x)-1
# sum=0
# for z in x:
#      sum+=(int(z)*2**c)
#      c-=1
# print(sum)

x=input('Enter binary notation :')
c=len(x)-1
sum=0
for z in x:
     sum+=((ord(z)-ord('0'))*2**c)
     c-=1
print(sum)

