class shape:
    pass
class rectangle(shape):
    pass
class circle(shape):
    pass

s=shape()
c=circle()
print(isinstance(s,shape))
print(isinstance(s,rectangle))
print(isinstance(s,circle))
print(issubclass(rectangle,circle))
print(issubclass(circle,shape))