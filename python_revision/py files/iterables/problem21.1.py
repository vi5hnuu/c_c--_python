lst=[10,11,12,13]
print(dir(lst))
# print(lst.__next__)#lst is iterable not iterator
i=lst.__iter__()
print(dir(i))
print(i.__next__())
print(i.__next__())
print(i.__next__())
print(i.__next__())