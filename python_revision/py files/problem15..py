def my_map(fun,seq):
    result=[]
    for ele in seq:
        result.append(fun(ele))
    return result

lst1=[1,2,3,4,5,6]
print(my_map(lambda x:x**2,lst1))