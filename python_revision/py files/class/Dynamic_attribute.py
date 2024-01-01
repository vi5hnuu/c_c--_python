class Bird:
    pass

b=Bird()

b.__name='sparrow'
b.weight=500
b.color='light brown'
b.animaltype='vertebrates'

b.weight=450
b.color='brown'

del b.animaltype