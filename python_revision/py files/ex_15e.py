lst=['malayalam','drawing','madamlamadam','1234321']
lst1=list(filter(lambda x:(x==''.join(list(reversed(x)))),lst))
# lst1=list(filter(lambda x:(x==''.join(reversed(x))),lst))
print(lst1)

# print(list(reversed(lst[0])))