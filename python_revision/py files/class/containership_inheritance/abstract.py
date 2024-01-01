# from abc import ABC,abstractmethod
#
# class shape(ABC):
#     @abstractmethod
#     def draw(self):
#         pass
#
# class rectangle(shape):
#     def draw(self):
#         print('rectangle')
# class circle(shape):
#     def draw(self):
#         print('circle')
#
# # s=shape()
# c=circle()
# c.draw()
# r=rectangle()
# r.draw()

###################################
###################################
###################################
# class shape():
#     def draw(self):
#         pass
#
# class rectangle(shape):
#     def draw(self):
#         print('rectangle')
# class circle(shape):
#     def draw(self):
#         print('circle')
#
# s=shape()
# s.draw()
# c=circle()
# c.draw()
# r=rectangle()
# r.draw()
###################################
###################################
###################################
# from abc import ABC,abstractmethod
# class shape(ABC):
#     def draw(self):
#         pass
#
# class rectangle(shape):
#     def draw(self):
#         print('rectangle')
# class circle(shape):
#     def draw(self):
#         print('circle')
#
# s=shape()
# s.draw()
# c=circle()
# c.draw()
# r=rectangle()
# r.draw()
###################################
###################################
###################################
from abc import ABC,abstractmethod
class shape(ABC):
    @abstractmethod
    def draw(self):
        pass

class rectangle(shape):
    @abstractmethod
    def draw(self):
        print('rectangle')
class circle(shape):
    def draw(self):
        print('circle')

# s=shape()
# s.draw()
c=circle()
c.draw()
# r=rectangle()
# r.draw()