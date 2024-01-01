from abc import ABC,abstractmethod

class printer(ABC):
    def __init__(self,n):
        self.__name=n
    @abstractmethod
    def print(self,docname):
        pass

class laserprinter(printer):
    def __init__(self,n):
        super().__init__(n)
    def print(self,docname):
        print('>>laserprinter.print')
        print('trying to print ',docname)
class inkjetprinter(printer):
    def __init__(self,n):
        super().__init__(n)
    def print(self,docname):
        print('>>inkjetprinter.print')
        print('trying to print ',docname)

p=laserprinter('inkjet 1100')
p.print('hello.pdf')
q=laserprinter('inkjet 1100')
q.print('hello1.pdf')