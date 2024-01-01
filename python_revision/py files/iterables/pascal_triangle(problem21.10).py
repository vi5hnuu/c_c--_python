class progression:
    def __init__(self,start=0):
        self._cur=start
    def __iter__(self):
        return self
    def advance(self):
        self._cur+=1
    def __next__(self):
        if self._cur is None:
            raise StopIteration
        else:
            data=self._cur
            self.advance()
            return data
    def display(self,n):
        print(''.join((str(next(self))+' ') for i in range(n)))
class Ap(progression):
    def __init__(self,start=0,step=1):
        super().__init__(start)
        self.__step=step
    def advance(self):
        self._cur+=self.__step

class Gp(progression):
    def __init__(self,start=1,step=2):
        super().__init__(start)
        self.__step=step
    def advance(self):
        self._cur*=self.__step
class Fp(progression):
    def __init__(self,first=0,second=1):
        super().__init__(first)
        self.__prev=second-first
    def advance(self):
        self.__prev,self._cur=self._cur,self.__prev+self._cur
print('default progression')
p=progression()
p.display(10)
print('ap with step 5')
a=Ap(5)
a.display(10)
print('Ap with start=2 and step=4')
a=Ap(2,4)
a.display(10)
print('Gp with default multiple')
g=Gp()
g.display(10)
print('Gp with start=1 and multiple 3')
g=Gp(1,3)
g.display(10)
print('Fp with default values')
f=Fp()
f.display(10)
print('Fp with start values 4 and 6')
f=Fp(4,6)
f.display(10)