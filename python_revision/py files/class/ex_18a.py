import math

class complex:
    def __init__(self,x,y):
        self.__real=x
        self.__imag=y
        print('ctor called',str(self))
    def display(self):
        print(self.__real,'+',self.__imag,'i')
    def add(self,p):
        r=self.__real+p.__real
        i=self.__imag+p.__imag
        return complex(r,i)
    def substract(self,p):
        r=self.__real-p.__real
        i=self.__imag-p.__imag
        return complex(r,i)
    def multiple(self,p):
        r=self.__real*p.__real-self.__imag*p.__imag
        i=self.__imag*p.__imag+self.__imag*p.__real
        return complex(r,i)
    def conj(self):
        r=self.__real
        i=-self.__imag
        return complex(r,i)
    def mods(self):
        mod2=self.__real*self.__real+self.__imag*self.__imag
        return math.sqrt(mod2)
    def divide(self,x):
        m=x.mods()
        c=x.conj()
        if m==0:
            print('Unable to divide the complex obj')
        else:
            quo=self.multiple(c)
            quo.__real=round(quo.__real/m,2)
            quo.__imag=round(quo.__imag/m,2)
            return quo
    def __del__(self):
        print('dtor called ',self)
a=complex(2,3) #ctor called
b=complex(6,-1) #ctor called
print('a:',end='')
a.display()
print('b:',end='')
b.display()

c=a.add(b) #ctor called
print('a+b=',end='')
c.display()

d=a.substract(b) #ctor called
print('a-b=',end='')
d.display()

e=a.multiple(b) #ctor called
print('a*b=',end='')
e.display()

f=a.divide(b) #ctor called*2
print('a/b=',end='')
f.display()

print(id(a))
print(id(b))
print(id(c))
print(id(d))
print(id(e))
print(id(f))
