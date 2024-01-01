import json

def encode_employee(x):
    if isinstance(x,employee):
        return (x.ecode,x.ename,x.doj,x.sal)
    else:
        raise TypeError('Complex obj is not json serializatiable')
def decode_employee(x):
    if '__employee__' in x:
        return employee(x['ecode'],x['ename'],x['doj'],x['sal'])
    return x

class employee:
    def __init__(self,ecode,ename,doj,sal):
        self.ecode=ecode
        self.ename=ename
        self.doj=doj
        self.sal=sal
    def print_data(self):
        print(self.ecode)
        print(self.ename)
        print(self.doj)
        print(self.sal)
e=employee('A101','vishnu','17/11,2017',25000)
f=open('data','w+')
json.dump(e,f,default=encode_employee)
m=json.dumps(e,default=encode_employee)
print(json.loads(m,object_hook=decode_employee))
f.seek(0)
ine=json.load(f,object_hook=decode_employee)
print(ine)