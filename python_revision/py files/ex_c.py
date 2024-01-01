import random
import time
random.seed(6);
for i in range(5):
    print(random.randint(10,50))

print()
t=int(time.time())
print(t)
random.seed(t)
for i in range(5):
    print(random.randint(10,50))