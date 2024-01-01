import random
lst=[]
for k in range(0,50):
    n=random.randint(0,50)
    lst.append(n)
print(lst)

num=int(input('Enter the number :'))
count=0;
# for i in range(len(lst)):
#     if lst[i]==num:
#         print('Number found at position ',i)
for i,v in enumerate(lst):
    if v==num:
        print('Number found at position ',i)
