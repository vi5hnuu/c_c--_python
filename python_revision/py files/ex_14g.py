# def Reverse(lst,i=0,j=0):
#     if i==0:
#         j=len(lst)-1
#     if len(lst)%2==0:
#         if ((i!=j+1)):
#             lst[i],lst[j]=lst[j],lst[i]
#             i+=1
#             j-=1
#             Reverse(lst,i,j)
#     else:
#         if ((i!=j)):
#             lst[i],lst[j]=lst[j],lst[i]
#             i+=1
#             j-=1
#             Reverse(lst,i,j)
#     return lst
#
# lst=[1,2,3,4,5,6]
# print(Reverse(lst))

################################
################################
################################
def Reverse(lst,i=0,j=0):
    if i==0:
        j=len(lst)-1
    if ((i<j)):
        lst[i],lst[j]=lst[j],lst[i]
        i+=1
        j-=1
        Reverse(lst,i,j)

    return lst

lst=[1,2,3,4,5,6]
print(Reverse(lst))