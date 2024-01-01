# def generate_list():
#     lst=[]
#     for i in range(1,11):
#         lst.append((i,i**2,i**3))
#     return lst
# print(generate_list())

def generate_list():
    lst=[]
    [lst.append((i,i**2,i**3)) for i in range(1,11)]
    return lst
print(generate_list())