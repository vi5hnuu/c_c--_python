import threading
import random
import queue
import time
import collections

def generate():
    for i in range(10):
        cond.acquire()
        num=random.randrange(10,20)
        print('generated number=',20)
        qfors.append(num)
        qforc.append(num)
        cond.notifyAll()
        cond.release()
def square():
    for i in range(10):
        cond.acquire()
        if len(qfors):
            num=qfors.popleft()
            print('num=',num,'square=',num*num)
        cond.notifyAll()
        cond.release()
def cube():
    for i in range(10):
        cond.acquire()
        if len(qforc):
            num=qforc.popleft()
            print('num=',num,'cube=',num*num*num)
            f.write('num='+str(num)+'cube='+str(num*num*num)+'\n')
        cond.notifyAll()
        cond.release()
f=open('cubes.txt','w')
qfors=collections.deque()
qforc=collections.deque()
cond=threading.Condition()
th1=threading.Thread(target=generate())
th2=threading.Thread(target=square)
th3=threading.Thread(target=cube)
th1.start()
th2.start()
th3.start()
th1.join()
th2.join()
th3.join()
print('all done')