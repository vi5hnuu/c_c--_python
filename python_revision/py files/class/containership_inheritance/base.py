class base:
    def __init__(self):
        self.i=10
        self._a=3.14
        self.__s='vishnu'
    def display(self):
        print(self.i,self._a,self.__s)

class derived(base):
    def __init__(self):
        super().__init__()
        self.i=100
        self._a=6.28
        self.__s='krishan'
        self.j=20
        self._b=16
        self.__s='derived'
    def display(self):
        super().display()
        print(self.i,self._a,self.__s)
        print(self.j,self._b,self.__s)

bobj=base()
bobj.display()
print(bobj.i)
print(bobj._a)
# print(bobj.__s)

dobj=derived()
dobj.display()
print(dobj.i)
print(dobj._a)
# print(dobj.__s)