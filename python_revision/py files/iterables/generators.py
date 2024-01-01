# def AvgAdc(lst):
#     for i in range(0,len(lst)-1):
#         yield (lst[i]+lst[i+1])/2
#
# lst=[10,11,12,12]
# for i in AvgAdc(lst):
#     print(i)
# print(AvgAdc(lst))
# print(list(AvgAdc(lst)))

# import random
# print(max(random.randint(10,100) for n in range(20)))
# print(sum(n**3 for n in range(20)))

import sys
lst=[i*i for i in range(15)]
lst1=(i*i for i in range(15))
print(lst)
print(lst1)
print(sys.getsizeof(lst))
print(sys.getsizeof(lst1))