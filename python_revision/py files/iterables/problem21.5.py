mat=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
ti=zip(*mat)
lst=[list(x) for x in ti]
print(lst)