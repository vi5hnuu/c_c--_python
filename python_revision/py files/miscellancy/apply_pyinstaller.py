import sys
import time

j=input('Enter name :')
print(j)

if 'x'==input('Enter x to exit:').lower():
    exit(0)
else:
    print('Exiting in 10 sec')
    for x in range(1,11):
        time.sleep(1)
        print('Exiting in ',x)
