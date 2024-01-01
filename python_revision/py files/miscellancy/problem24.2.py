# def show_bits(n):
#     '''pass a number and in return i wll give you binary of this number'''
#     for i in range(32,-1,-1):
#         andmask=1<<i
#         k=n & andmask
#         print('0',end='') if k==0 else print('1',end='')
#     print(show_bits.__doc__)
# show_bits(45)
# help(show_bits)
# print()
# print(bin(45))

#############################################
#############################################
#############################################
def show_bits(n):
    '''pass a number and in return i wll give you binary of this number'''
    for i in range(32,-1,-1):
        andmask=1<<i
        k=n & andmask
        print('0',end='') if k==0 else print('1',end='')
    # print(show_bits.__doc__)
show_bits(45)
# help(show_bits)
print()
print(bin(45))