class node:
    def __init__(self,car,price):
        self.car=car
        self.price=price
        self.next=None

class LinkedList:
    def __init__(self):
        self.__head=None

    def Add(self,c,pr):
        n=node(c,pr)
        if self.__head==None:
            self.__head=n
        else:
            p=self.__head
            while p.next is not None:
                p=p.next
            p.next=n
    def display(self):
        p=self.__head
        while p:
            print(p.car,p.price)
            p=p.next
list=LinkedList()
list.Add('BMW','55 lac')
list.Add('honda city','12 lac')
list.Add('cityy','12 lac')
list.display()
