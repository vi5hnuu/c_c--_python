import random

lst=[int(10*random.random()) for n in range(20)]
print(lst)
num=int(input('Enter the number between (1,10) :'))
indexlist=[i for i in range(len(lst)) if lst[i]==num]
print(indexlist)