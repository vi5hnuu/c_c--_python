import threading
import random
import time

def fun(ev,n):
    for i in range(n):
        print(i+1,'waiting for the flag to be set...')
        ev.wait()
        print('Wait complete at:',time.ctime())
        ev.clear()
        print()
def fun2(ev,n):
    for i in range(n):
        time.sleep(random.randrange(2,5))
        ev.set()
ev=threading.Event()
th=[]
num=random.randrange(4,8)
th.append(threading.Thread(target=fun,args=(ev,num)))
th[-1].start()
th.append(threading.Thread(target=fun2,args=(ev,num)))
th[-1].start()
for t in th:
    t.join()
print('all done')