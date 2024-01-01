import threading

def fun1():
    print('fun1')

class SquareGenerator(threading.Thread):
    def __init__(self,name,targett):
        threading.Thread.__init__(self,name='kumar',target=targett)
    def run(self):
        print('launching')
th=SquareGenerator('kumar',fun1)
th.start()

