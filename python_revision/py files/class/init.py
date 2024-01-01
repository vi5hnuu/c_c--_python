class employee:
    def set_data(self,n,a,s):
        self.__name=n
        self.__age=a
        self.__salary=s
    def __init__(self,n='',a=0,s=0):
         self.__name=n
         self.__age=a
         self.__salary=s
    def display(self):
        print(self.__name,self.__age,self.__salary)
    def __del__(self):
        print('deleting obj '+str(self))

e1=employee()
e2=employee('vishnu',10,250000)
e1.set_data('krishan',12,500000)
e1.display()
e2.display()

