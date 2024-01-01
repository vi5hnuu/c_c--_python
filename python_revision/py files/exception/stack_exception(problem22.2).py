class stack:
    def __init__(self,sz):
        self.__size=sz
        self.__arr=[]
        self.__top=-1
    def push(self,n):
        if self.__top+1==self.__size:
            raise IndexError('Stack is full')
        else:
            self.__top+=1
            self.__arr.append(n)
    def pop(self):
        if self.__top==-1:
            raise IndexError('Stack is empty')
        else:
            n=self.__arr[self.__top]
            # del (self.__arr[self.__top])
            self.__arr.remove(self.__arr[self.__top])
            self.__top-=1
            return n
    def printall(self):
        print(self.__arr)

s=stack(5)
try:
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    s.push(50)
    s.printall()
    # s.push(60)
    print(s.pop())
    print(s.pop())
    print(s.pop())
    print(s.pop())
    print(s.pop())
    # print(s.pop())
    s.printall()
except IndexError as Ex:
    print(Ex)
    print(Ex.args)
