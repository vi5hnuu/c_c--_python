import random
row,col=[int(x) for x in input('Enter row,col :').split(',')]

mat=[[random.randint(10,40) for x in range(col)] for x in range(row)]
print(mat)