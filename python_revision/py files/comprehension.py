# import random
#
# a=[random.randint(10,100) for n in range(20)]
# print(a)
#
# b=[(x**2,x**3) for x in range(0,10)]
# print(b)
# for x in b:
#     print(*x)

# nums=[int(x) for x in input('Enter the numbers :').split(' ')]
# print(nums)

# even=[x for x in range(0,20) if x%2==0]
# print(even)

# evenget=[int(x) for x in input('Enter numbers :').split(' ') if int(x)%2==0]
# print(evenget)

# a=[num for num in range(60)]
# a=[num for num in a if num<20 or num>50]
# print(a)

# a=['!' if alphabet in 'aAeEiIoOuU' else alphabet for alphabet in input('Enter string :')]
# print(a)

# arr=[[1,2,3],[4,5,6],[7,8,9]]
# b=[n for ele in arr for n in ele]
# b=[*arr[0],*arr[1],*arr[2]]
# print(b)

# lst=[a+b for a in [1,2,3] for b in [1,2,3]]
# print(lst)

# lst=[[a+b for a in [1,2,3]] for b in [1,2,3]]
# print(lst)
#
# lst=[[a+b] for a in [1,2,3] for b in [1,2,3]]
# print(lst)

# a=[(i,j,k) for i in [1,2,3] for j in [1,2,3] for k in [1,2,3] if i!=j and j!=k and k!=i]
# print(a)

# a={x**2 for x in range(10)}
# print(a)
#
# b={num for num in a if num>20 and num<50}
# print(b)

d={'a':1,'b':2,'c':3,'d':4}

# d={k:v**3 for (k,v) in d.items()}
# print(d)

# d={k:v**3 for (k,v) in d.items() if v>3}
# print(d)

d3={k:'Even' if v%2==0 else 'odd' for (k,v) in d.items()}
print(d3)