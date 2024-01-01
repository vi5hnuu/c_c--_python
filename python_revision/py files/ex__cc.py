# lst=[1,2,3,4,5,1,2,3,4,5,10,20,68,8,40,45,1,5,53,45,17]
# print('Original list ',lst)
# final_list=[*set(lst)]
# print('Final_list ',final_list)

lst=[1,2,3,4,5,1,2,3,4,5,10,20,68,8,40,45,1,5,53,45,17]
print('Original list ',lst)
final_list=[]
for num in lst:
    if num not in final_list:
        final_list.append((num))
    else:
        pass
print(final_list)