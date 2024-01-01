import json

def encode_complex(x):
    if isinstance(x,complex):
        return (x.real,x.imag)
    else:
        raise TypeError('complex obj is not serializable')

def decode_complex(dct):
    if '__complex__' in dct:
        return complex(dct['real'],dct['imag'])
class complex:
    def __init__(self,r=0,i=0):
        self.real=r
        self.imag=i
    def print_data(self):
        print(self.__real,self.__imag)
c=complex(1.0,2.0)
f=open('data.txt','w+')
json.dump(c,f,default=encode_complex)
f.seek(0)
x=json.load(f,object_hook=decode_complex)
print(x)
