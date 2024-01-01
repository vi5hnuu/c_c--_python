# def generate(n):
#     lol=[[] for i in range(n**n)]
#     pos=0
#     for i in range(1,n+1):
#         for j in range(1,n+1):
#             for k in range(1,n+1):
#                 t=[i,j,k]
#                 lol[pos]=t
#                 pos+=1
#     return lol
#
# i=generate(3) #only fro n=3
# print(i)


import sys
def generate(n):
    t=[]
    lol=[[] for i in range(n**n)]
    helper(n,t,lol)
    return lol
def helper(n,t,lol):
    global j
    if(len(t)==n):
        lol[j]=lol[j]+t
        j+=1
        return
    for i in range(1,n+1):
        t.append(i)
        helper(n,t,lol)
        t.pop()
j=0;
sys.setrecursionlimit(10**5)
i=generate(4)
print(i)

