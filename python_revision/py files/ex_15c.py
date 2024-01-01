nums=[x for x in range(10,81,10)]
strs=[chr(x) for x in range(65,73)]
# print(nums)
# print(strs)

ltpl=list(map(lambda x,y:(x,y),nums,strs))
print(ltpl)