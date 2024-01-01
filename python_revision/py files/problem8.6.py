# mat1=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
# mat2=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
# mat3=mat1+mat2
# print(mat3)
# mat4=[[],[],[]]
# print(len(mat1))
# print(len(mat1[0]))
# for i in range(len(mat1)):
#     for j in range(len(mat1[0])):
#         mat4[i].append(mat1[i][j] + mat2[i][j])
# print(mat4)

mat1=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
mat2=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
mat3=mat1+mat2
print(mat3)
mat4=[[0,0,0,0],[0,0,0,0],[0,0,0,0]]
print(len(mat1))
print(len(mat1[0]))
for i in range(len(mat1)):
    for j in range(len(mat1[0])):
        mat4[i][j]=(mat1[i][j] + mat2[i][j])
print(mat4)