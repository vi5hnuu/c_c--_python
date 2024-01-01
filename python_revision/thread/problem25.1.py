import threading
import time

def fun1():
    t=threading.current_thread()
    print('starting ',t.name)
    time.sleep(1)
    print('Exiting ',t.name)
def fun2():
    t=threading.current_thread()
    print('starting ',t.name)
    time.sleep(1)
    print('Exiting ',t.name)
def fun3():
    t=threading.current_thread()
    print('starting ',t.name)
    time.sleep(1)
    print('Exiting ',t.name)
t1=threading.Thread(target=fun1)
t2=threading.Thread(name='for fun1',target=fun1)
t3=threading.Thread(name='fro fun2',target=fun2)
lst=[t1,t2,t3]
for x in lst:
    x.start()
