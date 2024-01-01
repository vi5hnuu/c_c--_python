class QueueError(Exception):
    def __init__(self,msg,front,rear):
        self.errmsg=msg+' '+'front = '+str(front)+' rear = '+str(rear)
    def get_message(self):
        return self.errmsg

class queue:
    def __init__(self,sz):
        self.__size=sz
        self.__arr=[]
        self.__front=self.__rear=-1
    def add_queue(self,num):
        if self.__rear==self.__size-1:
            raise QueueError('Queue is full',self.__front,self.__rear)
        else:
            self.__rear+=1
            self.__arr+=[num]
            if self.__front==-1:
                self.__front=0
    # def delete_queue(self):
    #     if self.__front==-1:
    #         raise QueueError('Queue is empty',self.__front,self.__rear)
    #     else:
    #         data=self.__arr[self.__front]
    #         if(self.__front==self.__rear):
    #             self.__front=self.__rear=-1
    #         else:
    #             self.__front+=1
    #         return data
    ###################################
    def delete_queue(self):
        if self.__front==-1:
            raise QueueError('Queue is empty',self.__front,self.__rear)
        else:
            data=self.__arr[self.__front]
            del self.__arr[self.__front]
            if(self.__front==self.__rear):
                self.__front=self.__rear=-1
            return data

    def printall(self):
        print(self.__arr)
q=queue(5)
try:
    q.add_queue(10)
    q.add_queue(10)
    q.add_queue(10)
    q.add_queue(10)
    q.add_queue(10)
    q.printall()
    # q.add_queue(10)
    print(q.delete_queue())
    print(q.delete_queue())
    print(q.delete_queue())
    print(q.delete_queue())
    print(q.delete_queue())
    # print(q.delete_queue())
    q.printall()
except QueueError as q:
    print(q)
    print(q.args)
    print(q.get_message())