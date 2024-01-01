import random
print(random.random())
print(random.randint(2,10))
random.seed(10)
print(random.random())
random.seed()
print(random.random())