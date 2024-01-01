import threading,random,queue,time

def producer():
    for i in range(5):
        time.sleep(random.randrange(2,5,1))
        cond.acquire()
        num=random.randrange(10,20)
        print('Generated number ',num)
        q.append(num)
        cond.notify()
        cond.release()
def consumer():
    for i in range(5):
        cond.acquire()
        while True:
            if(len(q)):
                num=q.pop()
                break
            cond.wait()
        print('its square ',num*num)
        cond.release()
cond=threading.Condition()
q=[]
th1=threading.Thread(target=producer())
th2=threading.Thread(target=consumer())
th1.start()
th2.start()
th1.join()
th2.join()
print('all done')
