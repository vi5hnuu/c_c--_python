class department:
    def set_dept(self):
        self.__id=input('Enter the department id :')
        self.__name=input('Enter  the depart ment name :')
    def display_dept(self):
        print('Dept id ',self.__id)
        print('Dept  name ',self.__name)

class employee:
    def set_employee(self):
        self.__eid=input('Enter employee id :')
        self.__ename=input('Enter employee name :')
        self.__dobj=department()
        self.__dobj.set_dept()
    def display_employee(self):
        print('Employee id ',self.__eid)
        print('Employee name ',self.__ename)
        self.__dobj.display_dept()

obj=employee()
obj.set_employee()
obj.display_employee()