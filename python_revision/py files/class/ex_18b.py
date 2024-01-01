class matrix:
    size=3
    def __init__(self,r,c):
        self.__row=r
        self.__col=c
        self.__arr=[]

    def inilitizematrix(self):
        print('Enter the content of matrix row-wise.')
        for i in range(self.__row):
            print('row',i,':')
            a=[]
            for j in range(self.__col):
                a.append(int(input()))
            self.__arr.append(a)
        print('Matrix initilized successfully.')
    def displaymatrix(self):
        for i in range(self.__row):
            for j in range(self.__col):
                print('{0:<5}'.format(self.__arr[i][j]),end='')
            print()
    def add(self,m):
        mat=matrix(self.__row,self.__col)
        for i in range(self.__row):
            lst=[]
            for j in range(self.__col):
                lst.append(self.__arr[i][j]+m.__arr[i][j])
            mat.__arr.append(lst)
        return mat

    def multiply(self,m):
        mat=matrix(self.__row,self.__col)
        for i in range(self.__row):
            lst=[]
            for j in range(self.__col):
                temp=0
                for k in range(self.__col):
                    temp=temp+self.__arr[i][k]*m.__arr[k][j]
                lst.append(temp)
            mat.__arr.append(lst)
        return mat
    def transpose(self):
        mat=matrix(self.__row,self.__col)
        for i in range(self.__row):
            lst=[]
            for j in range(self.__col):
                lst.append(self.__arr[j][i])
            mat.__arr.append(lst)
        return mat

print('initilize matrix 1:')
mat1=matrix(3,3)
mat1.inilitizematrix()

print('initilize matrix 2:')
mat2=matrix(3,3)
mat2.inilitizematrix()

print('first matrix.')
mat1.displaymatrix()

print('first matrix.')
mat1.displaymatrix()

mat3=mat1.add(mat2)
print('after addition.')
mat3.displaymatrix()

mat4=mat1.add(mat2)
print('after multiplication.')
mat4.displaymatrix()

mat5=mat1.transpose()
print('after transpose')
mat5.displaymatrix()
