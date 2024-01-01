class employee:
    def set_data(self,n,a,s):
        self.name=n
        self.age=a
        self.salary=s
    def disply(self):
        print(self.name,self.age,self.salary)
e1=employee()
e1.set_data('vishnu',23,2500)
e1.disply()

########################
########################
class employee:
    def set_data(self,n,a,s):
        self.name=n
        self.age=a
        self.salary=s
    def disply(self):
        print(self.name,self.age,self.salary)
e1=employee()
e1.name='vishnu'
e1.age=23
e1.salary=2500
e1.disply()

##############################
##############################
class employee:
    def set_data(self,n,a,s):
        self._name=n
        self._age=a
        self._salary=s
    def disply(self):
        print(self._name,self._age,self._salary)
e1=employee()
e1.set_data('vishnu',23,2500)
# e1.name='vishnu'
# e1.age=23
# e1.salary=2500
e1.disply()

#############################
#############################
class employee:
    def set_data(self,n,a,s):
        self.__name=n
        self.__age=a
        self.__salary=s
    def disply(self):
        print(self.__name,self.__age,self.__salary)
e1=employee()
e1.set_data('vishnu',23,2500)
# e1.name='vishnu'
# e1.age=23
# e1.salary=2500
e1.disply()
