import random

# lst=[int(random.randint(1,15)) for x in range(100)]
# print(lst)

lst=[*set(int(random.randint(1,15)) for x in range(100))]
print(lst)