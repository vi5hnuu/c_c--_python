import threading

def factorial(n):
    try:
        rick.acquire()
        if n==0:
            return 1
        else:
            p=n*factorial(n-1)
            print(f'{n}!={p}')
        return p
    finally:
        rick.release()
rick=threading.RLock()
th1=threading.Thread(target=factorial,args=(5,))
th2=threading.Thread(target=factorial,args=(7,))
th1.start()
th2.start()
th1.join()
th2.join()