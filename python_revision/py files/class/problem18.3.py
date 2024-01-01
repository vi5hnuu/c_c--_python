class complex:
    def __init__(self,r=0.0,i=0.0):
        self.__real=r
        self.__imag=i
    def __eq__(self,p):
        if self.__real==p.__real and self.__imag==p.__imag:
            return True
        else:
            return False
c1=complex(1.1,0.2)
c2=complex(2.2,0.4)
c3=c1
if c1==c2:
    print('attribiutes of c1 and c2 are same')
else:
    print('attributes of c1 and c2 are not same')

if type(c1)==type(c2):
    print('c1 and c2 are of same type')
else:
    print('c1 and c2 are of different type')

if c1 is c3:
    print('c1 and c2 are same obj')
else:
    print('c1 and c2 are not same obj')
