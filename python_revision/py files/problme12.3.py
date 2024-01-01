import random

s={random.randint(15,45) for x in range(50)}
print(s)
count=len({x for x in s if x<30})
print(count)
s={num for num in s if num<30}
print(s)