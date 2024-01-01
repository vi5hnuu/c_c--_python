def avg_lst(lst):
    if len(lst)!=0:
        x=lst[0]+avg_lst(lst[1:])
    else:
        return 0
    return x/len(lst)

lst=[10,20,30]
print(avg_lst(lst))