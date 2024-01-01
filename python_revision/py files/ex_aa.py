# lst=['desert','dessert','to','too','lose','loose']
# s='mumbai'
# i=0
# while i<len(lst):
#     if i>3:
#         break
#     else :
#         print(i,lst[i],s[i])
#         i+=1

lst=['desert','dessert','to','too','lose','loose']
s='mumbai'
for index,value in enumerate(lst):
    if index>3:
        break
    else:
        print(index,s[index],lst[index])