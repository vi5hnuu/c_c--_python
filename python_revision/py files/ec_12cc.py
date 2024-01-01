a=[]
# for n in range(10,30):
#     if n%2==0:
#         a.append(n)
# print(a)

[a.append(n) for n in range(10,30) if n%2==0]
print(a)