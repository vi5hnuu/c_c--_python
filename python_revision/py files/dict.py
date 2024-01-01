# course={'daa':'cs','aoa':'me','svy':'cs'}
# ss=course.copy()
# print(ss)
import operator

# c={'CSE101':'CPP','CSE102':'DS','CSE202':'OOP'}
# d={'ME126':'HPE','ME102':'TOM','ME234':'AEM'}
# for k,v in reversed(c.items()):
#     print(k,v)
#
# print(c.get('CSE100','ABSENT'))
# print(c.get('CSE101','ABSENT'))
# print(c['CSE101'])
#
# c.update(d)
# print(c.popitem())
# print(c.pop('CSE101'))
# c.clear()

# animals={'tiger':141,'lion':520,'leopard':110}
# birds={'eagle':38,'crow':3,'parror':2}
# combined={*animals,*birds}
# com={**animals,**birds}
# print(combined)
# print(com)

lst=[10,11,12,13,15,16]
d=dict.fromkeys(lst,'vishnu')
print(d)